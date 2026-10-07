
ulong FUN_1002f6300(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_40;
  undefined1 local_38 [8];
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  if (2 < DAT_1011c568c) {
    local_40 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))(*(long **)(param_1 + 0x20),&local_40,local_38)
    ;
    if (2 < (int)DAT_1011c568c) {
      if (*(int *)(param_2 + 0x450) == 0x69) {
        pcVar8 = "USB_PID_IN";
      }
      else {
        pcVar8 = "USB_PID_OUT";
      }
      uVar9 = local_40;
      FUN_1008e3970("","USB",0,"[%s] Bulk/Interrupt; %s; host_frame_num 0x%llx",
                    *(long *)(param_1 + 0x10) + 0xcf,pcVar8,local_40);
      uVar10 = (undefined4)((ulong)uVar9 >> 0x20);
    }
  }
  lVar3 = param_2 + 0x4d8;
  *(undefined4 *)(param_2 + 0x46c) = 0;
  plVar5 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_2 + 0x450) == 0x69) {
    uVar7 = (**(code **)(*plVar5 + 0x108))
                      (plVar5,*(undefined1 *)(param_1 + 0x18),lVar3,*(undefined4 *)(param_2 + 0x43c)
                       ,FUN_1002f5830,param_2);
  }
  else {
    uVar7 = (**(code **)(*plVar5 + 0x110))
                      (plVar5,*(undefined1 *)(param_1 + 0x18),lVar3,*(undefined4 *)(param_2 + 0x43c)
                       ,FUN_1002f5830,param_2);
  }
  iVar6 = (int)uVar7;
  if (1 < (int)DAT_1011c568c) {
    uVar9 = CONCAT44(uVar10,*(undefined4 *)(param_2 + 0x10));
    uVar7 = FUN_1008e3970("","USB",0,"[%s] SUBMIT PKT(tag[0/%d]:%08x sz:%u) -> syserr:%08x pend:%u",
                          *(long *)(param_1 + 0x10) + 0xcf,*(undefined4 *)(param_2 + 0x430),uVar9,
                          *(undefined4 *)(param_2 + 0x43c),iVar6,
                          *(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
    uVar10 = (undefined4)((ulong)uVar9 >> 0x20);
  }
  if (iVar6 != 0) {
    *(int *)(param_2 + 0x46c) = iVar6;
    iVar6 = FUN_1002f5c90(param_1,param_2);
    if (iVar6 != 0) {
      *(undefined4 *)(param_2 + 0x46c) = 0;
      plVar5 = *(long **)(param_1 + 0x20);
      if (*(int *)(param_2 + 0x450) == 0x69) {
        uVar7 = (**(code **)(*plVar5 + 0x108))
                          (plVar5,*(undefined1 *)(param_1 + 0x18),lVar3,
                           *(undefined4 *)(param_2 + 0x43c),FUN_1002f5830,param_2);
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x110))
                          (plVar5,*(undefined1 *)(param_1 + 0x18),lVar3,
                           *(undefined4 *)(param_2 + 0x43c),FUN_1002f5830,param_2);
      }
      iVar6 = (int)uVar7;
      if (1 < (int)DAT_1011c568c) {
        uVar7 = FUN_1008e3970("","USB",0,
                              "[%s] SUBMIT PKT(tag[0/%d]:%08x sz:%u) -> syserr:%08x pend:%u",
                              *(long *)(param_1 + 0x10) + 0xcf,*(undefined4 *)(param_2 + 0x430),
                              CONCAT44(uVar10,*(undefined4 *)(param_2 + 0x10)),
                              *(undefined4 *)(param_2 + 0x43c),iVar6,
                              *(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
      }
      if (iVar6 == 0) goto LAB_1002f65a7;
      *(int *)(param_2 + 0x46c) = iVar6;
      FUN_1002f5c90(param_1,param_2);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if ((1 < (int)DAT_1011c568c) && (*(int *)(param_2 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar4 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar3 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    puVar2 = (uint *)(lVar3 + 8);
    uVar7 = (ulong)*puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 4) != 0) {
      uVar7 = FUN_1002c9070(param_2);
    }
  }
LAB_1002f65a7:
  if (2 < (int)DAT_1011c568c) {
    uVar7 = FUN_1008e3970("","USB",0,"[%s] BulkInterrupt finished",*(long *)(param_1 + 0x10) + 0xcf)
    ;
  }
  return uVar7;
}

