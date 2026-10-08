
void FUN_100abe090(long param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  double local_50;
  double local_48;
  double local_38;
  ulong local_30;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    if (DAT_1023109b8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100759600(pvVar3);
      DAT_102271308 = 1;
      DAT_1023109b8 = pvVar3;
    }
    FUN_1007596c0(&local_50,DAT_1023109b8);
    if (0.0 <= local_50) {
      iVar2 = (int)(local_50 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((local_50 - (double)(int)(DAT_100e110e0 + local_50)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_50);
    }
    if (0.0 <= local_48) {
      iVar6 = (int)(local_48 + DAT_100e110f0);
    }
    else {
      iVar6 = (int)((local_48 - (double)(int)(DAT_100e110e0 + local_48)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_48);
    }
    if (0.0 <= local_38) {
      iVar7 = (int)(local_38 + DAT_100e110f0);
    }
    else {
      iVar7 = (int)((local_38 - (double)(int)(DAT_100e110e0 + local_38)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_38);
    }
    local_30 = CONCAT44(iVar6 + -1 + iVar7,iVar2);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_100319c50(uVar4);
    uVar5 = FUN_100331080(uVar4,&local_30);
    local_60 = 0;
    local_5c = 0;
    local_58 = -1;
    local_54 = -1;
    local_68 = 0;
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar4 = FUN_100319c50(uVar4);
    cVar1 = FUN_100330fe0(uVar4,&local_30,&local_60,&local_68,&local_70);
    if (cVar1 == '\0') {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("","ShellIntClient",1,"failed to get coherence display bounds for (%d,%d)",
                      local_30,local_30 >> 0x20);
      }
    }
    else {
      local_80 = 0;
      local_78 = 0xffffffffffffffff;
      FUN_100ae7810(local_90);
      FUN_100ae7f00(&local_80,0,0);
      FUN_100ae79a0(local_90);
      local_c8 = 0x80000000f;
      fVar8 = (float)local_70;
      uStack_c0 = CONCAT44((int)((float)(local_80._4_4_ - local_68._4_4_) * fVar8),
                           (int)((float)((int)local_80 - (int)local_68) * fVar8));
      local_b8 = CONCAT44((int)((float)((1 - local_80._4_4_) + local_78._4_4_) * fVar8),
                          (int)((float)((1 - (int)local_80) + (int)local_78) * fVar8));
      uStack_b0 = CONCAT44((int)((float)(local_5c - local_68._4_4_) * fVar8),
                           (int)((float)(local_60 - (int)local_68) * fVar8));
      local_a8 = CONCAT44((int)((float)((1 - local_5c) + local_54) * fVar8),
                          (int)((float)((1 - local_60) + local_58) * fVar8));
      local_a0 = (undefined4)uVar5;
      local_9c = (undefined4)((ulong)uVar5 >> 0x20);
      FUN_100a4a170(param_1 + 0x10,&local_c8,0x30);
    }
  }
  return;
}

