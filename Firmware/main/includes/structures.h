// SCR
typedef struct{
  int x;
  int y;
  int w;
  int h;
} SCR;
SCR SCREEN = {0,0,320,240};

// OFFSET
typedef struct{
  int x;
  int y;
} OFFSET;
OFFSET POS = {64,32};
OFFSET ORIGIN = {16,48};

// LIST
typedef struct{
  int limit;
  int16_t offset;
  int total;
  int pages;
  int page;
} LIST;
LIST ROMS = {8, 0, 0, 0, 0};

// FILE
typedef struct{
  char name[256];
  char path[256];
  bool ready;
} LOAD;
LOAD ROM;

// SYSTEM
typedef struct SYSTEM_T{
  int x;
  uint16_t system[32][32];
  uint16_t color[32][32];
} SYSTEM;
SYSTEM SYSTEMS[COUNT] = {
  /* OPTIONS */
  {
   0,
   {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,0,0,65535,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,0},{0,0,0,0,0,0,65535,65535,0,65535,65535,65535,65535,65535,65535,0,65535,65535,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0,0},{0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,65535,65535,0,0,65535,65535,65535,65535,0},{0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,65535,65535,0,0,0,0,65535,65535,0,0},{0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,65535,65535,0,0,0,0,65535,65535,0,0},{0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,0,0,65535,65535,65535,65535,0},{0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,0},{0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,65535,65535,65535,65535,65535,0,0,0,0},{0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,65535,0,0,65535,0,0,0,0},{0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0},{0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,65535,65535,65535,65535,65535,65535,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,65535,65535,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},},
   {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,40147,0,0,40147,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,40147,40147,40147,40147,40147,0,0,0},{0,0,0,0,0,0,52825,52825,0,52825,52825,52825,52825,52825,52825,0,52825,52825,0,0,0,0,40147,40147,40147,40147,40147,40147,40147,0,0,0},{0,0,0,0,0,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,0,0,40147,40147,40147,40147,0,0,40147,40147,40147,40147,0},{0,0,0,0,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,0,0,40147,40147,0,0,0,0,40147,40147,0,0},{0,0,0,0,52825,52825,52825,52825,52825,52825,0,0,0,0,52825,52825,52825,52825,52825,52825,0,0,40147,40147,0,0,0,0,40147,40147,0,0},{0,0,0,0,0,52825,52825,52825,0,0,0,0,0,0,0,0,52825,52825,52825,0,0,40147,40147,40147,40147,0,0,40147,40147,40147,40147,0},{0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,40147,40147,40147,40147,40147,40147,40147,0,0},{0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,52825,0,40147,40147,40147,40147,40147,0,0,0,0},{0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,52825,0,0,40147,0,0,40147,0,0,0,0},{0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0},{0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,52825,52825,52825,0,0,0,0,0,0,0,0,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,52825,52825,52825,52825,52825,52825,0,0,0,0,52825,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,52825,52825,0,52825,52825,52825,52825,52825,52825,0,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,52825,52825,52825,52825,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},}
  },
  /* FIRMWARE */
  {
   0,
   {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,65535,0,0,65535,0,0,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,0,65535,65535,0,0,0,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,65535,65535,65535,65535,65535,65535,0,0,0,65535,65535,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,0,0,65535,65535,65535,65535,65535,65535,65535,65535,0,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,65535,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,0,65535,0,65535,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,65535,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},},
   {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,46675,46675,46675,46675,46675,25798,46675,46675,46675,46675,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,46675,46675,25798,25798,25798,46675,46675,46675,25798,25798,46675,46675,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,46675,46675,25798,25798,25798,25798,46675,46675,25798,25798,46675,46675,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,46675,46675,25798,46675,46675,46675,46675,46675,25798,25798,46675,46675,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,46675,46675,25798,25798,46675,46675,46675,46675,25798,25798,46675,46675,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,46675,46675,46675,46675,46675,25798,46675,46675,46675,46675,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,25798,0,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,65535,46486,46486,46486,46486,46486,65535,65535,65535,65535,46486,46486,46486,46486,46486,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,46486,12710,12710,46486,12710,12710,46486,65535,65535,46486,12710,12710,46486,12710,12710,46486,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,46486,46486,46486,46486,46486,46486,65535,65535,65535,65535,46486,46486,46486,46486,46486,46486,46486,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,46486,46486,12710,12710,46486,46486,65535,65535,31,31,65535,46486,46486,46486,46486,46486,12710,46486,46486,0,0,0,0,0,0},{0,0,0,0,0,0,65535,46486,12710,12710,12710,12710,46486,65535,65535,65535,65535,46486,46486,12710,46486,46486,12710,12710,12710,46486,0,0,0,0,0,0},{0,0,0,0,0,0,65535,46486,12710,12710,12710,12710,46486,65535,65535,65535,65535,46486,12710,12710,12710,46486,46486,12710,46486,46486,0,0,0,0,0,0},{0,0,0,0,0,0,65535,46486,46486,12710,12710,46486,46486,65535,65535,65535,65535,46486,46486,12710,46486,46486,46486,46486,46486,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,46486,46486,46486,46486,65535,65535,65535,65535,65535,65535,46486,46486,46486,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,65535,42292,42292,42292,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,42292,2113,42292,2113,42292,65535,65535,16918,16918,54664,54664,54664,54664,54664,54664,54664,54664,54664,65535,0,0,0,0,0,0},{0,0,0,0,0,0,42292,42292,42292,42292,42292,42292,42292,65535,16918,16918,54664,65535,65535,16904,65535,65535,65535,65535,54664,65535,0,0,0,0,0,0},{0,0,0,0,0,0,42292,0,42292,2113,42292,2113,42292,65535,16918,16918,54664,65535,16904,65535,65535,16904,35953,65535,54664,65535,0,0,0,0,0,0},{0,0,0,0,0,0,42292,42292,42292,42292,42292,42292,42292,65535,16918,16918,54664,65535,16904,65535,65535,35953,16904,65535,54664,65535,0,0,0,0,0,0},{0,0,0,0,0,0,65535,42292,2113,42292,2113,42292,65535,65535,16918,16918,54664,65535,65535,16904,65535,65535,65535,65535,54664,65535,0,0,0,0,0,0},{0,0,0,0,0,0,0,65535,42292,42292,42292,65535,65535,65535,16918,16918,54664,54664,54664,54664,54664,54664,54664,54664,54664,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},}
  },
};

// THEME
typedef struct{
  int bg;
  int fg;
  char name[10];
} THEME;
THEME THEMES[22] = {
  {32768,54580,"maroon"},
  {57545,62839,"red"},
  {64143,65049,"pink"},
  {39684,56918,"brown"},
  {62470,65174,"orange"},
  {50604,61240,"apricot"},
  {33792,54932,"olive"},
  {65283,65461,"yellow"},
  {60845,63289,"beige"},
  {49000,59351,"lime"},
  {15753,48951,"green"},
  {45048,57340,"mint"},
  {17617,48858,"teal"},
  {18078,49023,"cyan"},
  {14,42297,"navy"},
  {17178,48733,"blue"},
  {37110,54652,"purple"},
  {52318,61119,"lavender"},
  {59804,62910,"magenta"},
  {0,42292,"black"},
  {16936,48631,"dark"},
  {29614,52857,"light"}
};
THEME GUI;

typedef struct
{
    uint8_t type;
    uint8_t subtype;
    uint8_t _reserved0;
    uint8_t _reserved1;

    uint8_t label[16];

    uint32_t flags;
    uint32_t length;
} odroid_partition_t;