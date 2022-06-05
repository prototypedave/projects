int main(int /*argc*/, char /*argv*/[])
{
    double posX = 22, 
	   posY = 12;  
    //x and y start position  
    double dirX = -1, 
	   dirY = 0; 
    //initial direction vector  
    double planeX = 0, 
	   planeY = 0.66; 
    //the 2d raycaster version of camera plane  
    double time = 0; 
    //time of current frame  
    double oldTime = 0; 
    //time of previous frame  
    screen(screenWidth, screenHeight, 0, "Raycaster");  
    while(!done()) 
    {  
        for(int x = 0; x < w; x++) 
     	{ 
	    //calculate ray position and direction  
	    double cameraX = 2 * x / (double)w - 1; 
	    //x-coordinate in camera space
	    double rayDirX = dirX + planeX * cameraX; 
       	    double rayDirY = dirY + planeY * cameraX;
      	    //which box of the map we're in 
            int mapX = int(posX); 
       	    int mapY = int(posY); 
       	    //length of ray from current position to next x or y-side
            double sideDistX; 
       	    double sideDistY; 
       	    //length of ray from one x or y-side to next x or y-side 
	    abs(|rayDir| / rayDirX) and abs(|rayDir| / rayDirY) 
	    //where |rayDir| is the length of the vector (rayDirX, rayDirY). Its length,           
	    // Division through zero is prevented, 
	    double deltaDistX = (rayDirX == 0) ? 1e30 : std::abs(1 / rayDirX);
      	    double deltaDistY = (rayDirY == 0) ? 1e30 : std::abs(1 / rayDirY); 
       	    double perpWallDist;
	}
    }
}

