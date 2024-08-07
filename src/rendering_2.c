#include "../headers/maze.h"

/**
 * renderRays - render ray by ray the rays for raycasting
 *
 * Return: void
 */

void renderRays(void)
{
    int i;
    /* Calculate the position for the bottom center of the screen */ 
    int map_offset_x = (WINDOW_WIDTH - (MAP_NUM_COLS * TILE_SIZE * MINIMAP_SCALE_FACTOR)) / 2;
    int map_offset_y = WINDOW_HEIGHT - (MAP_NUM_ROWS * TILE_SIZE * MINIMAP_SCALE_FACTOR) - 10;

    if (SDL_SetRenderDrawColor(r.renderer, 255, 0, 0, 255) != 0)
        exitWithError("renderRays, cannot render draw color");

    for (i = 0; i < NUM_RAYS; i++)
    {
        /* rendering the rays */
        if (SDL_RenderDrawLine(r.renderer,
                               map_offset_x + (MINIMAP_SCALE_FACTOR * player.x),
                               map_offset_y + (MINIMAP_SCALE_FACTOR * player.y),
                               map_offset_x + (MINIMAP_SCALE_FACTOR * rays[i].wall_hit_x),
                               map_offset_y + (MINIMAP_SCALE_FACTOR * rays[i].wall_hit_y)) != 0)
            exitWithError("renderRays, cannot render draw line");
    }
}

/**
 * renderColorBufferTexture - update the texture
 *
 * Return: void
 */

void renderColorBufferTexture(void)
{
	if (SDL_UpdateTexture(r.color_buffer_texture,
			      NULL,
			      r.color_buffer,
			      (int)WINDOW_WIDTH * sizeof(uint32_t)) != 0)
		exitWithError("renderColorBufferTexture, cannot update texture");

	if (SDL_RenderCopy(r.renderer, r.color_buffer_texture, NULL, NULL) != 0)
		exitWithError("renderColorBufferTexture, cannot render copy");
}
