
undefined8
FUN_10028b100(long *param_1,long param_2,uint param_3,uint *param_4,uint param_5,undefined8 param_6,
             undefined4 param_7,long param_8)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
  if ((9 < param_3) && ((*(byte *)(param_2 + 1) & 1) == 0)) {
    if ((*(ushort *)(param_2 + 7) < 8) || (*(short *)((long)param_4 + 2) == 0)) {
      return 0;
    }
    uVar2 = CONCAT11((char)(short)*param_4,(char)((ushort)(short)*param_4 >> 8));
    uVar1 = CONCAT11((char)*(undefined2 *)((long)param_4 + 2),
                     (char)((ushort)*(undefined2 *)((long)param_4 + 2) >> 8)) >> 4;
    if ((uint)uVar1 <= (uint)uVar2) {
      if (uVar2 + 2 <= param_5) {
        if (uVar1 == 0) {
          return 0;
        }
        iVar9 = uVar1 + 1;
        do {
          uVar3 = param_4[4];
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          uVar4 = (uint)*(undefined8 *)(param_4 + 2);
          uVar5 = (uint)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
          if (uVar3 != 0) {
            lVar8 = CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                             uVar4 << 0x18,
                             uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                             uVar5 << 0x18);
            if (*(ulong *)(param_8 + 0x18) < ((ulong)uVar3 - 1) + lVar8) {
              uVar7 = 0x52100;
              goto LAB_10028b16a;
            }
            if (*(uint *)(param_8 + 0x70) < uVar3) break;
            plVar6 = (long *)(**(code **)(*param_1 + 0xd8))();
            (**(code **)(*plVar6 + 0x260))(plVar6,lVar8,uVar3);
          }
          iVar9 = iVar9 + -1;
          param_4 = param_4 + 4;
          if (iVar9 < 2) {
            return 0;
          }
        } while( true );
      }
      uVar7 = 0x52600;
      goto LAB_10028b16a;
    }
  }
  uVar7 = 0x52400;
LAB_10028b16a:
  uVar7 = FUN_1004103f0(uVar7,param_6,param_7,0);
  return uVar7;
}

