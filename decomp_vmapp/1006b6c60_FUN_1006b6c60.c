
undefined8 FUN_1006b6c60(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ushort uVar5;
  __darwin_ct_rune_t _Var6;
  int iVar7;
  long lVar8;
  
  *(undefined2 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar3 = *param_1;
  lVar8 = 0;
  if (0 < *(int *)(lVar3 + 4)) {
    iVar4 = 0;
    do {
      uVar5 = *(ushort *)(lVar3 + *(long *)(lVar3 + 0x10) + (long)iVar4 * 2);
      _Var6 = (__darwin_ct_rune_t)(char)uVar5;
      if (0xff < uVar5) {
        _Var6 = 0;
      }
      _Var6 = ___toupper(_Var6);
      if (_Var6 * 0x1000000 + 0xd0ffffffU < 0xaffffff) {
        iVar7 = (char)_Var6 + -0x30;
      }
      else {
        if (0x6fffffe < _Var6 * 0x1000000 + 0xbfffffffU) {
          return 0;
        }
        iVar7 = (char)_Var6 + -0x37;
      }
      if (iVar7 < 0) {
        return 0;
      }
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 4) <= iVar4 + 1) {
        return 0;
      }
      uVar5 = *(ushort *)(lVar3 + *(long *)(lVar3 + 0x10) + (long)(iVar4 + 1) * 2);
      _Var6 = (__darwin_ct_rune_t)(char)uVar5;
      if (0xff < uVar5) {
        _Var6 = 0;
      }
      _Var6 = ___toupper(_Var6);
      uVar1 = _Var6 * 0x1000000;
      if (uVar1 + 0xd0ffffff < 0xaffffff) {
        iVar2 = (char)_Var6 + -0x30;
      }
      else {
        uVar1 = uVar1 + 0xbfffffff;
        if (0x6fffffe < uVar1) {
          return 0;
        }
        iVar2 = (char)_Var6 + -0x37;
      }
      if (iVar2 < 0) {
        return 0;
      }
      *(byte *)((long)param_2 + lVar8) = (byte)iVar2 | (byte)(iVar7 << 4);
      if ((int)lVar8 == 5) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
      iVar7 = iVar4 + 2;
      lVar3 = *param_1;
      if (iVar7 < *(int *)(lVar3 + 4)) {
        uVar5 = *(ushort *)(*(long *)(lVar3 + 0x10) + lVar3 + (long)iVar7 * 2);
        if (0xff < uVar5) {
          uVar5 = 0;
        }
        if ((uVar5 & 0xff) == 0x3a) {
          iVar7 = iVar4 + 3;
        }
        if ((uVar5 & 0xff) == 0x2d) {
          iVar7 = iVar4 + 3;
        }
      }
      iVar4 = iVar7;
      lVar8 = lVar8 + 1;
    } while (iVar4 < *(int *)(lVar3 + 4));
  }
  return 0;
}

