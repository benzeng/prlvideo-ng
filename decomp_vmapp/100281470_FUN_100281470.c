
int FUN_100281470(long *param_1,uint param_2,byte *param_3,undefined1 param_4,undefined8 param_5,
                 undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_3c;
  int local_38 [2];
  
  QMutex::lock();
  if (*(byte *)(param_1 + 0x19) != param_2) {
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,0x20400,param_7,param_8,0);
    goto LAB_100281733;
  }
  if (param_3 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*param_3;
  }
  plVar1 = param_1 + 0x27;
  FUN_10026ce00(plVar1,uVar4);
  if (uVar4 < 0xa3) {
    if (uVar4 < 0x2a) {
      iVar5 = 0;
      if (uVar4 != 4) {
LAB_100281571:
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 0;
      if ((0x33 < uVar4 - 0x2a) || ((0x80c0000000011U >> ((ulong)(uVar4 - 0x2a) & 0x3f) & 1) == 0))
      goto LAB_100281571;
    }
  }
  else {
    iVar5 = 0;
    if ((0x1c < uVar4 - 0xa3) || ((0x10080081U >> (uVar4 - 0xa3 & 0x1f) & 1) == 0))
    goto LAB_100281571;
  }
  if ((char)param_1[0x2b] != '\0') {
    FUN_10026cc10(plVar1);
  }
  local_38[0] = 0;
  local_3c = 0;
  plVar2 = param_1 + 0x12;
  FUN_100284da0(plVar2,param_5,param_6,local_38);
  if (((param_1[0x14] == 0) && (local_38[0] != 0)) && (*param_3 != 0)) {
    iVar5 = (**(code **)(*param_1 + 0x58))(param_1,0x52400,param_7,param_8,0);
  }
  else {
    if (iVar5 == 0) {
      FUN_100284bc0(plVar2);
    }
    plVar3 = (long *)param_1[0x2c];
    if (plVar3 == (long *)0x0) {
      iVar6 = FUN_1003e33e0(param_1 + 0x2d,param_3,param_4,param_1[0x14],local_38[0],param_1[0x14],
                            local_38[0],param_7,param_8,iVar5,&local_3c);
      *(undefined4 *)(param_1 + 0x51) = 1;
    }
    else {
      iVar6 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,param_3,param_4,param_1[0x14],local_38[0],param_1[0x14],local_38[0],
                         param_7,param_8,iVar5,&local_3c);
    }
    if (iVar6 == 0) {
      if (((uVar4 == 0x12) && (6 < local_3c)) && (((param_3[1] & 1) == 0 || (param_3[2] == 0)))) {
        *(ushort *)(param_1[0x14] + 6) = *(ushort *)(param_1[0x14] + 6) | 0x200;
      }
      if (uVar4 == 0x1b) {
        FUN_10026cf00(plVar1,param_3);
      }
    }
    if (iVar5 != 0) {
      FUN_100284b10(plVar2,local_3c);
    }
    FUN_100284d60(plVar2);
    iVar5 = (uint)(iVar6 != 0) * 2;
  }
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_100281733:
  QMutex::unlock();
  return iVar5;
}

