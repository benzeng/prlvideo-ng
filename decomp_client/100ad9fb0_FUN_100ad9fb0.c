
void FUN_100ad9fb0(long param_1,double *param_2)

{
  double dVar1;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  dVar1 = *param_2;
  if (0.0 <= dVar1) {
    local_28 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    local_28 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar1);
  }
  dVar1 = param_2[1];
  if (0.0 <= dVar1) {
    local_24 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    local_24 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar1);
  }
  local_20 = *(undefined4 *)(param_2 + 4);
  local_1c = *(undefined4 *)(param_2 + 6);
  local_18 = *(undefined4 *)((long)param_2 + 0x24);
  local_14 = *(undefined4 *)(param_2 + 5);
  local_10 = *(undefined4 *)((long)param_2 + 0x2c);
  _PrlDevMouse_Event(*(undefined8 *)(param_1 + 0x20),&local_28,0x1c,1);
  return;
}

