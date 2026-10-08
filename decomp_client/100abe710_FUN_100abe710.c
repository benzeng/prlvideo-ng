
undefined8 FUN_100abe710(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    local_30 = QCursor::pos();
    local_40 = 0;
    local_38 = 0xffffffffffffffff;
    local_50 = 0;
    local_48 = 0xffffffffffffffff;
    local_58 = 0;
    uVar4 = 0;
    iVar2 = FUN_100ae7f00(&local_40,0,0);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330fe0(uVar4,&local_30,&local_50,&local_58,&local_60);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
      }
      uVar4 = FUN_100319c50(uVar4);
      local_68 = FUN_100331080(uVar4,&local_30);
      FUN_100abea30(iVar2,(QPoint *)&local_40);
      local_28 = (undefined4)local_30;
      local_24 = (undefined4)((ulong)local_30 >> 0x20);
      cVar1 = QRect::contains((QPoint *)&local_40,SUB81(&local_28,0));
      if ((cVar1 == '\0') && (cVar1 = FUN_100ae8350(), cVar1 == '\0')) {
        return 0;
      }
      if (iVar2 == 3) {
        iVar5 = local_40._4_4_ + -9;
        iVar3 = (int)local_30;
      }
      else if (iVar2 == 2) {
        iVar3 = (int)local_40 + -9;
        iVar5 = local_30._4_4_;
      }
      else {
        iVar3 = -1;
        iVar5 = -1;
        if (iVar2 == 0) {
          iVar3 = (int)local_38 + 9;
          iVar5 = local_30._4_4_;
        }
      }
      fVar8 = (float)local_60;
      local_70 = CONCAT44((int)((float)(iVar5 - local_58._4_4_) * fVar8),
                          (int)((float)(iVar3 - (int)local_58) * fVar8));
      iVar3 = 1 - (int)local_40;
      iVar5 = (int)((float)((int)local_40 - (int)local_58) * fVar8);
      iVar6 = 1 - local_40._4_4_;
      iVar7 = (int)((float)(local_40._4_4_ - local_58._4_4_) * fVar8);
      local_40 = CONCAT44(iVar7,iVar5);
      local_38 = CONCAT44(iVar7 + -1 +
                          (int)((float)(iVar6 + (int)((ulong)local_38 >> 0x20)) * fVar8),
                          iVar5 + -1 + (int)((float)(iVar3 + (int)local_38) * fVar8));
      iVar3 = (int)local_50;
      iVar7 = (int)((float)(iVar3 - (int)local_58) * fVar8);
      iVar5 = (int)((ulong)local_50 >> 0x20);
      iVar6 = (int)((float)(iVar5 - local_58._4_4_) * fVar8);
      local_50 = CONCAT44(iVar6,iVar7);
      local_48 = CONCAT44(iVar6 + -1 +
                          (int)((float)((int)((ulong)local_48 >> 0x20) + (1 - iVar5)) * fVar8),
                          iVar7 + -1 + (int)((float)((int)local_48 + (1 - iVar3)) * fVar8));
      uVar4 = FUN_100abebf0(param_1,&local_68,iVar2,&local_40,&local_50,&local_70);
    }
  }
  return uVar4;
}

