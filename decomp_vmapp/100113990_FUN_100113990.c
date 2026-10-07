
undefined8 FUN_100113990(long param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 local_70 [24];
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  uint local_34;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x1148);
  lVar7 = (ulong)param_2 * 0xb78;
  *(undefined2 *)(lVar2 + 0x222 + lVar7) = 0;
  *(undefined2 *)(lVar2 + 0x7da + lVar7) = 0;
  local_34 = param_2;
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(param_2,0x10,0xffffffff);
  }
  iVar5 = FUN_100683330(param_1 + 0xc,0x20047802,&local_34,4,param_2);
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(local_34,0x10,*param_3);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x1a50);
  if (lVar3 != 0) {
    if (*(short *)(lVar2 + 0x222 + lVar7) != 0) {
      FUN_1000f5e20(lVar3,(undefined2)local_34,lVar2 + lVar7);
    }
    if (*(short *)(lVar2 + 0x7da + lVar7) != 0) {
      FUN_1000f5fa0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a50),(undefined2)local_34,
                    lVar2 + 0x5b8 + lVar7,*(undefined4 *)(lVar2 + 0xb70 + lVar7));
    }
  }
  uVar6 = 0;
  if (iVar5 != 0) {
    iVar1 = *param_4;
    FUN_1008e3970("","vm",0,"HOST_IOCTL_VM_ACTIVATE_MONITOR failed! %x %x alloc_fail=%x",iVar5,iVar1
                  ,0x80000001);
    uVar4 = DAT_1011c3650;
    uVar6 = 0x80000183;
    if (iVar1 != -1) {
      if (iVar1 == -0x7ffffff5) {
        local_58 = (void *)0x0;
        pvStack_50 = (void *)0x0;
        local_48 = 0;
        FUN_10006a060(local_70);
        FUN_1000648b0(uVar4,0x80000559,&local_58,local_70);
        FUN_10006a680(local_70);
        uVar6 = 0x80000559;
        if (local_58 != (void *)0x0) {
          if (pvStack_50 != local_58) {
            pvStack_50 = (void *)((~((long)pvStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_50);
          }
          operator_delete(local_58);
        }
      }
      else if (iVar1 == -0x7fffffff) {
        uVar6 = 0x80000196;
      }
      else {
        uVar6 = 0x80000009;
      }
    }
  }
  return uVar6;
}

