
uint FUN_100c0ac60(AES_KEY *param_1,long *param_2,void *param_3,long *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  ulong len;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar4 = param_5 - 8;
  local_38 = lVar7;
  uVar6 = 0xffffffff;
  if ((7 < uVar4) && ((uVar4 & 7) == 0)) {
    local_48 = *param_4;
    len = (ulong)uVar4;
    _memcpy(param_3,param_4 + 1,len);
    if (uVar4 != 0) {
      uVar8 = (ulong)((uVar4 >> 3) * 6);
      iVar2 = 0;
      do {
        uVar6 = 0;
        puVar5 = (undefined8 *)((len - 8) + (long)param_3);
        do {
          lVar7 = local_48;
          bVar1 = local_48._7_1_ ^ (byte)uVar8;
          local_48 = CONCAT17(bVar1,(undefined7)local_48);
          if (0xff < (uint)uVar8) {
            local_48._6_1_ = SUB81(lVar7,6);
            local_48._5_1_ = SUB81(lVar7,5);
            local_48 = CONCAT35(CONCAT21(CONCAT11(bVar1,local_48._6_1_ ^ (byte)(uVar8 >> 8)),
                                         local_48._5_1_ ^ (byte)(uVar8 >> 0x10)),
                                CONCAT14((byte)(uVar8 >> 0x18) ^ (byte)((ulong)lVar7 >> 0x20),
                                         (int)lVar7));
          }
          local_40 = *puVar5;
          _AES_decrypt((uchar *)&local_48,(uchar *)&local_48,param_1);
          *puVar5 = local_40;
          uVar6 = uVar6 + 8;
          uVar8 = (ulong)((uint)uVar8 - 1);
          puVar5 = puVar5 + -1;
        } while (uVar6 < uVar4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 6);
    }
    plVar3 = &DAT_101da8057;
    if (param_2 != (long *)0x0) {
      plVar3 = param_2;
    }
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    uVar6 = uVar4;
    if (local_48 != *plVar3) {
      _OPENSSL_cleanse(param_3,len);
      uVar6 = 0;
    }
  }
  if (lVar7 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

