
void FUN_100117320(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar3 = FUN_1000afe20(param_1,param_4[1]);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar3;
    }
    break;
  case 1:
    uVar3 = FUN_1000b1710(param_1,param_4[1],param_4[2],param_4[3]);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar3;
    }
    break;
  case 2:
    lVar2 = param_4[1];
    lVar1 = param_4[2];
    local_38 = (QArrayData *)QString::fromAscii_helper("",0);
    uVar3 = FUN_1000b1710(param_1,lVar2,lVar1,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1001173fc;
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1001173fc:
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar3;
    }
    break;
  case 3:
    lVar2 = param_4[1];
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
    local_48 = (QArrayData *)QString::fromAscii_helper("",0);
    uVar3 = FUN_1000b1710(param_1,lVar2,&local_40,&local_48);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10011747b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10011747b:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1001174ab;
        local_29 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1001174ab:
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar3;
    }
    break;
  case 4:
    uVar4 = FUN_1000b1aa0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 5:
    uVar4 = FUN_1000b1b80(param_1,*(undefined4 *)param_4[1]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar4;
    }
    break;
  case 6:
    FUN_10008fa70(param_1,0x4e21);
    return;
  case 7:
    FUN_1000a7de0(param_1);
    return;
  case 8:
    if (*(char *)param_4[1] != '\0') {
      FUN_1000a7880(param_1);
      return;
    }
    FUN_1000a7890(param_1);
    return;
  case 9:
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = *(undefined1 *)(param_1 + 0x1ab8);
    }
    break;
  case 10:
    if (*param_4 != 0) {
      *(bool *)*param_4 = *(int *)(param_1 + 0xa4) == 4;
    }
    break;
  case 0xb:
    if (*param_4 != 0) {
      *(bool *)*param_4 = 0xd < *(uint *)(param_1 + 0xa4);
    }
  }
  return;
}

