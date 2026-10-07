
undefined4 FUN_10039e9e0(undefined4 *param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  float fVar2;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  (*DAT_1011c5e88)(1,&local_24);
  (*DAT_1011c69a8)(local_24,0x2800,param_1[1]);
  (*DAT_1011c69a8)(local_24,0x2801,*param_1);
  (*DAT_1011c69a8)(local_24,0x2802,param_1[2]);
  (*DAT_1011c69a8)(local_24,0x2803,param_1[3]);
  (*DAT_1011c69a8)(local_24,0x8072,param_1[4]);
  (*DAT_1011c6998)(param_1[5],local_24,0x8501);
  fVar2 = DAT_100b39678;
  if (1 < (int)param_1[6]) {
    fVar2 = (float)(int)param_1[6];
  }
  (*DAT_1011c6998)(fVar2,local_24,0x84fe);
  if (*(char *)(param_1 + 7) == '\0') {
    (*DAT_1011c69a8)(local_24,0x884c,0);
  }
  else {
    (*DAT_1011c69a8)(local_24,0x884c,0x884e);
    (*DAT_1011c69a8)(local_24,0x884d,param_1[8]);
  }
  (*DAT_1011c69a0)(local_24,0x1004,param_1 + 9);
  (*DAT_1011c6998)(param_1[0xd],local_24,0x813a);
  (*DAT_1011c6998)(param_1[0xe],local_24,0x813b);
  uVar1 = 0x8a49;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar1 = 0x8a4a;
  }
  (*DAT_1011c69a8)(local_24,0x8a48,uVar1);
  return local_24;
}

