
undefined4 FUN_1004cba00(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulong local_28;
  
  uVar4 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) == 1) && (*(short *)(param_2 + 0x14) == 0)) {
    lVar5 = FUN_1002a6120(param_2,0,0);
    if ((lVar5 != 0) && (uVar4 = 0xf0000009, 0x17 < *(uint *)(lVar5 + 8))) {
      FUN_1002a5990(lVar5,0,&local_38,0x18);
      local_58 = local_38;
      uStack_54 = uStack_34;
      uStack_50 = uStack_30;
      uStack_4c = uStack_2c;
      local_44 = (undefined4)(local_28 >> 0x20);
      uVar3 = (uint)local_28;
      uVar2 = (uint)(local_28 >> 6);
      local_48 = uVar3 >> 0xf & 4 |
                 (uVar3 & 0x10000) << 8 |
                 uVar2 & 0x100 |
                 uVar3 << 7 & 0x100000 |
                 (uint)(local_28 >> 2) & 0x80 |
                 uVar2 & 4 |
                 (uint)(local_28 >> 4) & 8 |
                 (uVar3 & 0x40) << 4 |
                 (uVar3 & 0x20) << 0xc |
                 uVar3 << 7 & 0x800 | (uVar3 & 8) << 6 | (uint)(local_28 >> 1) & 3;
      FUN_1004cef90(&local_60,*param_1 + 0x48);
      uVar4 = 0xf0000012;
      if (local_60 != (long *)0x0) {
        uVar4 = FUN_1004e0a90(local_60,&local_58);
        LOCK();
        plVar1 = local_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  return uVar4;
}

