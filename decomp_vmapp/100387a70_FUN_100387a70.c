
void FUN_100387a70(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_100bbd068;
  if (*(char *)(DAT_1011c8478 + 0x84) != '\0') {
    (*DAT_1011c5b70)(4,(long)param_1 + 0xbc);
  }
  cVar1 = (*DAT_1011c63b8)(*(undefined4 *)(param_1 + 6));
  if (cVar1 != '\0') {
    (*DAT_1011c5b80)(1,param_1 + 6);
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  cVar1 = (*DAT_1011c6360)(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    (*DAT_1011c5738)(0x8d40,*(undefined4 *)(param_1 + 4));
    (*DAT_1011c5de8)(0x8d40,0x8d00,0xde1,0,0);
    (*DAT_1011c5de8)(0x8d40,0x8d20,0xde1,0,0);
    (*DAT_1011c5b20)(1,param_1 + 4);
  }
  cVar1 = (*DAT_1011c6360)(*(undefined4 *)((long)param_1 + 0x24));
  if (cVar1 != '\0') {
    (*DAT_1011c5738)(0x8d40,*(undefined4 *)((long)param_1 + 0x24));
    (*DAT_1011c5de8)(0x8d40,0x8d00,0xde1,0,0);
    (*DAT_1011c5de8)(0x8d40,0x8d20,0xde1,0,0);
    (*DAT_1011c5b20)(1,(undefined4 *)((long)param_1 + 0x24));
  }
  (*DAT_1011c5770)(*(undefined4 *)((long)param_1 + 0x44));
  (*DAT_1011c5708)(0x8892,0);
  (*DAT_1011c5770)(0);
  (*DAT_1011c5b10)(1,param_1 + 9);
  (*DAT_1011c5b88)(1,(long)param_1 + 0x44);
  if (*(int *)((long)param_1 + 0xb4) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0xac) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0xa4) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x9c) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x94) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x84) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x74) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 100) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x54) != 0) {
    (*DAT_1011c5b40)();
  }
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    (*DAT_1011c5b40)();
  }
  return;
}

