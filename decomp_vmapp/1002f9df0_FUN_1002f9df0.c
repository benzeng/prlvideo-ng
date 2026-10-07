
void FUN_1002f9df0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  FUN_1002a8320();
  *param_1 = &PTR_FUN_100bb6380;
  param_1[0x2325] = 0;
  param_1[0x2324] = 0;
  param_1[0x232e] = 0;
  param_1[0x232d] = 0;
  param_1[0x232c] = 0;
  param_1[0x232b] = 0;
  param_1[0x232a] = 0;
  param_1[0x2329] = 0;
  param_1[9000] = 0;
  param_1[8999] = 0;
  iVar1 = FUN_1007da300("video.use_gl",0x19a);
  *(int *)((long)param_1 + 0x85c) = iVar1;
  if (iVar1 < 0x140) {
    if ((iVar1 == 0) || (iVar1 == 0xd2)) goto LAB_1002f9ebd;
  }
  else if ((iVar1 == 0x140) || (iVar1 == 0x19a)) goto LAB_1002f9ebd;
  *(undefined4 *)((long)param_1 + 0x85c) = 0xd2;
LAB_1002f9ebd:
  *(undefined4 *)(param_1 + 0x2318) = 0;
  *(undefined4 *)((long)param_1 + 0x118e4) = 0;
  *(undefined4 *)(param_1 + 0x231d) = 0;
  *(undefined4 *)((long)param_1 + 0x118ec) = 0;
  *(undefined1 *)(param_1 + 0x2320) = 1;
  if (param_3 == 2) {
    *(undefined4 *)(param_1 + 0x2326) = 7;
  }
  else if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0x2326) = 9;
  }
  else {
    *(undefined4 *)(param_1 + 0x2326) = 0;
  }
  iVar1 = FUN_1007da300("video.cgl_copy_context",0);
  *(bool *)(param_1 + 0x232f) = iVar1 != 0;
  return;
}

