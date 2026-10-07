
int FUN_10082f8f0(AES_KEY *param_1,undefined8 *param_2,undefined8 *param_3,void *param_4,
                 uint param_5)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = -1;
  local_38 = lVar6;
  if ((7 < param_5) && ((param_5 & 7) == 0)) {
    _memcpy(param_3 + 1,param_4,(ulong)param_5);
    puVar4 = &DAT_100b533b7;
    if (param_2 != (undefined8 *)0x0) {
      puVar4 = param_2;
    }
    local_48 = *puVar4;
    if (param_5 != 0) {
      iVar3 = 0;
      uVar7 = 1;
      do {
        uVar8 = 0;
        puVar4 = param_3 + 1;
        puVar9 = param_3;
        do {
          puVar5 = puVar4;
          local_40 = *puVar5;
          _AES_encrypt((uchar *)&local_48,(uchar *)&local_48,param_1);
          uVar1 = local_48;
          bVar2 = local_48._7_1_ ^ (byte)uVar7;
          local_48 = CONCAT17(bVar2,(undefined7)local_48);
          if (0xff < uVar7) {
            local_48._6_1_ = SUB81(uVar1,6);
            local_48._5_1_ = SUB81(uVar1,5);
            local_48 = CONCAT35(CONCAT21(CONCAT11(bVar2,local_48._6_1_ ^ (byte)(uVar7 >> 8)),
                                         local_48._5_1_ ^ (byte)(uVar7 >> 0x10)),
                                CONCAT14((byte)(uVar7 >> 0x18) ^ (byte)((ulong)uVar1 >> 0x20),
                                         (int)uVar1));
          }
          *puVar5 = local_40;
          uVar8 = uVar8 + 8;
          uVar7 = uVar7 + 1;
          puVar4 = puVar9 + 2;
          puVar9 = puVar5;
        } while (uVar8 < param_5);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 6);
    }
    *param_3 = local_48;
    iVar3 = param_5 + 8;
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar6 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

