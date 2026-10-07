
void FUN_100843ad0(long param_1,long param_2,ulong param_3,undefined8 param_4,byte *param_5,
                  undefined8 param_6,int param_7,code *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  char local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte local_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_3 != 0) {
    uVar6 = 0;
    if (param_7 == 0) {
      do {
        uVar4 = uVar6 >> 3;
        uVar5 = uVar6 & 7;
        uVar8 = (uint)uVar5 ^ 7;
        bVar9 = (*(byte *)(param_1 + uVar4) >> uVar8 & 1) != 0;
        uVar2 = *(undefined8 *)param_5;
        uVar3 = *(undefined8 *)(param_5 + 8);
        (*param_8)(param_5,param_5,param_4);
        bVar7 = *param_5;
        local_68 = (char)uVar2;
        bStack_67 = (byte)((ulong)uVar2 >> 8);
        *param_5 = bStack_67 >> 7 | local_68 * '\x02';
        bStack_66 = (byte)((ulong)uVar2 >> 0x10);
        param_5[1] = bStack_66 >> 7 | bStack_67 * '\x02';
        bStack_65 = (byte)((ulong)uVar2 >> 0x18);
        param_5[2] = bStack_65 >> 7 | bStack_66 * '\x02';
        bStack_64 = (byte)((ulong)uVar2 >> 0x20);
        param_5[3] = bStack_64 >> 7 | bStack_65 * '\x02';
        bStack_63 = (byte)((ulong)uVar2 >> 0x28);
        param_5[4] = bStack_63 >> 7 | bStack_64 * '\x02';
        bStack_62 = (byte)((ulong)uVar2 >> 0x30);
        param_5[5] = bStack_62 >> 7 | bStack_63 * '\x02';
        bStack_61 = (byte)((ulong)uVar2 >> 0x38);
        param_5[6] = bStack_61 >> 7 | bStack_62 * '\x02';
        local_60 = (byte)uVar3;
        param_5[7] = local_60 >> 7 | bStack_61 * '\x02';
        bStack_5f = (byte)((ulong)uVar3 >> 8);
        param_5[8] = bStack_5f >> 7 | local_60 * '\x02';
        bStack_5e = (byte)((ulong)uVar3 >> 0x10);
        param_5[9] = bStack_5e >> 7 | bStack_5f * '\x02';
        bStack_5d = (byte)((ulong)uVar3 >> 0x18);
        param_5[10] = bStack_5d >> 7 | bStack_5e * '\x02';
        bStack_5c = (byte)((ulong)uVar3 >> 0x20);
        param_5[0xb] = bStack_5c >> 7 | bStack_5d * '\x02';
        bStack_5b = (byte)((ulong)uVar3 >> 0x28);
        param_5[0xc] = bStack_5b >> 7 | bStack_5c * '\x02';
        bStack_5a = (byte)((ulong)uVar3 >> 0x30);
        param_5[0xd] = bStack_5a >> 7 | bStack_5b * '\x02';
        bStack_59 = (byte)((ulong)uVar3 >> 0x38);
        param_5[0xe] = bStack_59 >> 7 | bStack_5a * '\x02';
        param_5[0xf] = bVar9 | bStack_59 * '\x02';
        uVar6 = uVar6 + 1;
        *(byte *)(param_2 + uVar4) =
             (byte)(((byte)(bVar9 * -0x80 ^ bVar7) & 0x80) >> (sbyte)uVar5) |
             ~(byte)(1 << (sbyte)uVar8) & *(byte *)(param_2 + uVar4);
      } while (param_3 != uVar6);
    }
    else {
      do {
        uVar4 = uVar6 >> 3;
        uVar5 = uVar6 & 7;
        uVar8 = (uint)uVar5 ^ 7;
        bVar7 = *(byte *)(param_1 + uVar4);
        uVar2 = *(undefined8 *)param_5;
        uVar3 = *(undefined8 *)(param_5 + 8);
        (*param_8)(param_5,param_5,param_4);
        bVar7 = ((bVar7 >> uVar8 & 1) != 0) * -0x80 ^ *param_5;
        local_68 = (char)uVar2;
        bStack_67 = (byte)((ulong)uVar2 >> 8);
        *param_5 = bStack_67 >> 7 | local_68 * '\x02';
        bStack_66 = (byte)((ulong)uVar2 >> 0x10);
        param_5[1] = bStack_66 >> 7 | bStack_67 * '\x02';
        bStack_65 = (byte)((ulong)uVar2 >> 0x18);
        param_5[2] = bStack_65 >> 7 | bStack_66 * '\x02';
        bStack_64 = (byte)((ulong)uVar2 >> 0x20);
        param_5[3] = bStack_64 >> 7 | bStack_65 * '\x02';
        bStack_63 = (byte)((ulong)uVar2 >> 0x28);
        param_5[4] = bStack_63 >> 7 | bStack_64 * '\x02';
        bStack_62 = (byte)((ulong)uVar2 >> 0x30);
        param_5[5] = bStack_62 >> 7 | bStack_63 * '\x02';
        bStack_61 = (byte)((ulong)uVar2 >> 0x38);
        param_5[6] = bStack_61 >> 7 | bStack_62 * '\x02';
        local_60 = (byte)uVar3;
        param_5[7] = local_60 >> 7 | bStack_61 * '\x02';
        bStack_5f = (byte)((ulong)uVar3 >> 8);
        param_5[8] = bStack_5f >> 7 | local_60 * '\x02';
        bStack_5e = (byte)((ulong)uVar3 >> 0x10);
        param_5[9] = bStack_5e >> 7 | bStack_5f * '\x02';
        bStack_5d = (byte)((ulong)uVar3 >> 0x18);
        param_5[10] = bStack_5d >> 7 | bStack_5e * '\x02';
        bStack_5c = (byte)((ulong)uVar3 >> 0x20);
        param_5[0xb] = bStack_5c >> 7 | bStack_5d * '\x02';
        bStack_5b = (byte)((ulong)uVar3 >> 0x28);
        param_5[0xc] = bStack_5b >> 7 | bStack_5c * '\x02';
        bStack_5a = (byte)((ulong)uVar3 >> 0x30);
        param_5[0xd] = bStack_5a >> 7 | bStack_5b * '\x02';
        bStack_59 = (byte)((ulong)uVar3 >> 0x38);
        param_5[0xe] = bStack_59 >> 7 | bStack_5a * '\x02';
        param_5[0xf] = bVar7 >> 7 | bStack_59 * '\x02';
        uVar6 = uVar6 + 1;
        *(byte *)(param_2 + uVar4) =
             (byte)((bVar7 & 0x80) >> (sbyte)uVar5) |
             ~(byte)(1 << (sbyte)uVar8) & *(byte *)(param_2 + uVar4);
      } while (param_3 != uVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

