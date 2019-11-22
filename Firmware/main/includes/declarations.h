/*
 Debounce
*/
void debounce(int key);

/*
 Text
*/
int get_letter(char letter);
void draw_text(short x, short y, char *string, bool ext, bool current);

/*
 Mask
*/
void draw_mask(int x, int y, int w, int h);
void draw_background();

/*
 Settings
*/
void draw_settings();

/*
 Toggle
*/
void draw_toggle();
void get_toggle();
void set_toggle();

/*
 Volume
*/
void draw_volume();
int32_t get_volume();
void set_volume();

/*
 Brightness
*/
void draw_brightness();
int32_t get_brightness();
void set_brightness();
void apply_brightness();

/*
 Theme
*/
void draw_themes();
void get_theme();
void set_theme(int8_t i);
void update_theme();

/*
 States
*/
void get_step_state();
void set_step_state();

void get_list_state();
void set_list_state();

void set_restore_states();
void get_restore_states();


/*
 GUI
*/
void draw_systems();
void draw_media(int x, int y, bool current);
void draw_folder(int x, int y, bool current);
void draw_battery();
void draw_speaker();
void draw_contrast();
void draw_numbers();
void draw_launcher();
void draw_launcher_options();

/*
  TILE
*/  
void draw_tile_image(const char* filename);

/*
  Files
*/
void get_files();
void sort_files(char** files);
void draw_files();
void has_save_file(char *name);

/*
  Animations
*/
void animate(int dir);
void restore_layout();
void clean_up();

/*
  Boot Screens
*/
void splash();
void boot();
void restart();

/*
  FIRMWARE Options
*/
void firmware_run(bool resume);
void firmware_resume();
void firmware_delete_save();

/*
  Launcher
*/
static void launcher();
