
undefined4 FUN_1004cbf70(long *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulong local_58;
  long *local_50;
  undefined1 local_48 [20];
  undefined4 local_34;
  
  uVar4 = 0xf0000003;
  if ((*(short *)(param_2 + 0x16) == 2) && (*(short *)(param_2 + 0x14) == 0)) {
    lVar5 = FUN_1002a6120(param_2,0,0);
    if ((lVar5 != 0) && (uVar4 = 0xf0000009, 0x17 < *(uint *)(lVar5 + 8))) {
      FUN_1002a5990(lVar5,0,local_48,0x18);
      FUN_1004cef90(&local_50,*param_1 + 0x48,local_34);
      uVar4 = 0xf0000012;
      if (local_50 != (long *)0x0) {
        lVar6 = FUN_1002a6120(param_2,1,0);
        uVar4 = 0xf0000003;
        if (lVar6 != 0) {
          FUN_1002a5990(lVar5,0,&local_68,0x18);
          local_88 = local_68;
          uStack_84 = uStack_64;
          uStack_80 = uStack_60;
          uStack_7c = uStack_5c;
          local_74 = (undefined4)(local_58 >> 0x20);
          uVar3 = (uint)local_58;
          uVar1 = (uint)(local_58 >> 6);
          local_78 = uVar3 >> 0xf & 4 |
                     (uVar3 & 0x10000) << 8 |
                     uVar1 & 0x100 |
                     uVar3 << 7 & 0x100000 |
                     (uint)(local_58 >> 2) & 0x80 |
                     uVar1 & 4 |
                     (uint)(local_58 >> 4) & 8 |
                     (uVar3 & 0x40) << 4 |
                     (uVar3 & 0x20) << 0xc |
                     uVar3 << 7 & 0x800 | (uVar3 & 8) << 6 | (uint)(local_58 >> 1) & 3;
          FUN_1002a4d60(&DAT_1011c3e48,DAT_10111cc78,'\x02' - (*(byte *)(lVar6 + 0xc) & 1));
          plVar7 = (long *)0x0;
          if (local_50[0x10] != 0) {
            plVar7 = *(long **)(local_50[0x10] + 0x10);
          }
          cVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,local_50 + 3);
          uVar4 = 0xf0000007;
          if (cVar2 != '\0') {
            plVar7 = (long *)0x0;
            if (local_50[0x10] != 0) {
              plVar7 = *(long **)(local_50[0x10] + 0x10);
            }
            cVar2 = (**(code **)(*plVar7 + 0x38))(plVar7,local_50 + 3);
            if (cVar2 != '\0') {
              uVar4 = FUN_1004e1410(local_50,&local_88,lVar6);
            }
          }
        }
        LOCK();
        plVar7 = local_50 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  return uVar4;
}

