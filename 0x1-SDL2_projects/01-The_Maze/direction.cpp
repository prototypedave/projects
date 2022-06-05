//what direction to step in x or y-direction (either +1 or -1)
int direction()
{
    int stepX;
    int stepY;
    int hit = 0; //was there a wall hit?    
    int side; //was a NS or a EW wall hit? 
    //calculate step and initial sideDist 
    if(rayDirX < 0)  
    { 
        stepX = -1; 
 	sideDistX = (posX - mapX) * deltaDistX; 
    } 
    else  
    {
        stepX = 1;
	sideDistX = (mapX + 1.0 - posX) * deltaDistX;
    } 
    if(rayDirY < 0)
    { 
        stepY = -1;  
  	sideDistY = (posY - mapY) * deltaDistY; 
    } 
    else 
    { 
        stepY = 1; 
 	sideDistY = (mapY + 1.0 - posY) * deltaDistY;
    } 
    //perform DDA   
    while(hit == 0) 
    {
        //jump to next map square, either in x-direction, or in y-direction 
        if(sideDistX < sideDistY) 
 	{  
	    sideDistX += deltaDistX; 
   	    mapX += stepX;
  	    side = 0;
	} 
 	else 
 	{  
	    sideDistY += deltaDistY;
  	    mapY += stepY;
  	    side = 1;
	}  
  	//Check if ray has hit a wall 
	if(worldMap[mapX][mapY] > 0) hit = 1;   
    } 
    //Calculate distance projected on camera direction. This is the shortest distance from the point where the wall is
    //hit to the camera plane. Euclidean to center camera point would give fisheye effect!      
    if(side == 0) perpWallDist = (sideDistX - deltaDistX); 
    else          perpWallDist = (sideDistY - deltaDistY);
}
