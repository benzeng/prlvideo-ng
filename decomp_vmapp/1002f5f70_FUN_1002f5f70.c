
ulong FUN_1002f5f70(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  char *pcVar11;
  uint uVar12;
  code *in_stack_ffffffffffffff78;
  long in_stack_ffffffffffffff80;
  undefined4 uVar13;
  int *local_40;
  long local_38;
  
  if (2 < DAT_1011c568c) {
    pcVar11 = "USB_PID_OUT";
    if (*(int *)(param_2 + 0x450) == 0x69) {
      pcVar11 = "USB_PID_IN";
    }
    in_stack_ffffffffffffff78 =
         (code *)CONCAT44((int)((ulong)in_stack_ffffffffffffff78 >> 0x20),*(int *)(param_2 + 0x450))
    ;
    FUN_1008e3970("","USB",0,"[%s] Isochronous: %s (0x%x)",*(long *)(param_1 + 0x10) + 0xcf,pcVar11,
                  in_stack_ffffffffffffff78);
  }
  local_40 = (int *)(param_2 + 0x450);
  *(undefined4 *)(param_2 + 0x468) = 6;
  iVar6 = FUN_1002d9440(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x490));
  local_38 = *(long *)(param_1 + 0x28);
  iVar8 = -0x1ffffd12;
  uVar12 = 1;
  do {
    uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
    uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff80 >> 0x20);
    iVar7 = FUN_1002f5e70(param_1,&local_38);
    lVar5 = local_38;
    if (iVar7 != 0) {
      *(undefined4 *)(param_2 + 0x468) = 0xc;
      *(int *)(param_2 + 0x46c) = iVar7;
      lVar5 = *(long *)(param_1 + 0x10);
      if ((1 < DAT_1011c568c) && (*local_40 == 0x69)) {
        FUN_1002da980(2,param_2);
      }
      uVar3 = *(uint *)(param_2 + 0x470);
      *(undefined4 *)(param_2 + 0x464) = 1;
      LOCK();
      piVar1 = (int *)(*(long *)(lVar5 + 0xc0) + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar12 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      goto LAB_1002f62c8;
    }
    *(long *)(param_2 + 0x488) = local_38;
    if (1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,
                    "[%s] SUBMIT PKT(sz:%u iso[0/%u]=(sz:%5u)) -> syserr:%x frno:0x%x/%llx..%llx",
                    *(long *)(param_1 + 0x10) + 0xcf,*(undefined4 *)(param_2 + 0x43c),
                    CONCAT44(uVar9,*(undefined4 *)(param_2 + 0x490)),
                    CONCAT44(uVar13,(uint)*(ushort *)(param_2 + 0x49c)),iVar8,
                    *(undefined4 *)(param_2 + 0x480),local_38,local_38 + (ulong)(iVar6 - 1));
    }
    plVar4 = *(long **)(param_1 + 0x20);
    in_stack_ffffffffffffff80 = param_2;
    if (*local_40 == 0x69) {
      in_stack_ffffffffffffff78 = FUN_1002f5830;
      uVar10 = (**(code **)(*plVar4 + 0x118))
                         (plVar4,*(undefined1 *)(param_1 + 0x18),param_2 + 0x4d8,lVar5,
                          *(undefined4 *)(param_2 + 0x490),param_2 + 0x498,FUN_1002f5830,param_2);
    }
    else {
      in_stack_ffffffffffffff78 = FUN_1002f5830;
      uVar10 = (**(code **)(*plVar4 + 0x120))
                         (plVar4,*(undefined1 *)(param_1 + 0x18),param_2 + 0x4d8,lVar5,
                          *(undefined4 *)(param_2 + 0x490),param_2 + 0x498,FUN_1002f5830,param_2);
    }
    iVar8 = (int)uVar10;
  } while ((uVar12 < 8) && (uVar12 = uVar12 + 1, iVar8 != 0));
  if (iVar8 == 0) {
    *(ulong *)(param_1 + 0x28) = lVar5 + (ulong)(iVar6 - 1);
  }
  else {
    if (0 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Isoc submit error %x",*(long *)(param_1 + 0x10) + 0xcf,
                    uVar10 & 0xffffffff);
    }
    if (iVar8 == -0x1fffbfaf) {
      uVar9 = 9;
    }
    else {
      uVar9 = 7;
      if (iVar8 != -0x1fffbfb1) {
        if (iVar8 == -0x1ffffd18) {
          uVar9 = 8;
        }
        else {
          uVar9 = 0xc;
        }
      }
    }
    *(undefined4 *)(param_2 + 0x468) = uVar9;
    *(int *)(param_2 + 0x46c) = iVar8;
    lVar5 = *(long *)(param_1 + 0x10);
    if ((1 < DAT_1011c568c) && (*local_40 == 0x69)) {
      FUN_1002da980(2,param_2);
    }
    uVar3 = *(uint *)(param_2 + 0x470);
    *(undefined4 *)(param_2 + 0x464) = 1;
    LOCK();
    piVar1 = (int *)(*(long *)(lVar5 + 0xc0) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar12 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
LAB_1002f62c8:
    uVar10 = (ulong)uVar12;
    if ((uVar3 & 4) != 0) {
      uVar10 = FUN_1002c9070(param_2);
      return uVar10;
    }
  }
  return uVar10;
}

