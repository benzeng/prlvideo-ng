
int FUN_1006768b0(long param_1,char *param_2,int param_3,int *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  __darwin_ct_rune_t _Var6;
  __darwin_ct_rune_t _Var7;
  size_t sVar8;
  undefined2 uVar9;
  ulong uVar10;
  uint *puVar11;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    }
    else {
      puVar11 = (uint *)*puVar2;
      if ((1 < *puVar11) || (*(long *)(puVar11 + 4) != 0x18)) {
        QByteArray::reallocData(puVar2,puVar11[1] + 1,puVar11[2] >> 0x1f);
        puVar11 = (uint *)*puVar2;
      }
      lVar3 = *(long *)(puVar11 + 4);
      if ((long)puVar11 + lVar3 != 0) {
        uVar4 = FUN_10067c340(*(undefined8 *)(param_1 + 8));
        if (uVar4 == 0xffffffff) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.06:");
          return 0x815801b;
        }
        iVar5 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),0xc,param_4);
        if (iVar5 != 0x8000000) {
          FUN_1008e3970("","WinRegistry",0,"OA00002.07:\t%zx;\t%x",0xc,iVar5);
          return iVar5;
        }
        uVar9 = 0x686c;
        if (uVar4 < 5) {
          uVar9 = 0x666c;
        }
        iVar5 = *param_4;
        lVar1 = (ulong)(iVar5 + 4) + lVar3;
        *(undefined2 *)((long)puVar11 + lVar1) = uVar9;
        *(undefined2 *)((long)puVar11 + lVar1 + 2) = 1;
        *(int *)((long)puVar11 + lVar1 + 4) = param_3 + -0x1000;
        if (*(short *)((long)puVar11 + lVar1) != 0x666c) {
          if (*(short *)((long)puVar11 + lVar1) == 0x686c) {
            _Var6 = 0;
            if (*param_2 != '\0') {
              _Var6 = ___toupper((int)*param_2);
              sVar8 = _strlen(param_2);
              uVar10 = 1;
              if (1 < sVar8) {
                do {
                  _Var7 = ___toupper((int)param_2[uVar10]);
                  _Var6 = _Var7 + _Var6 * 0x25;
                  uVar10 = uVar10 + 1;
                  sVar8 = _strlen(param_2);
                } while (uVar10 < sVar8);
              }
            }
            *(__darwin_ct_rune_t *)((long)puVar11 + lVar1 + 8) = _Var6;
            return 0x8000000;
          }
          FUN_1008e3970("","WinRegistry",0,"OA00002.08:\t%x");
          FUN_10067ce20(*(undefined8 *)(param_1 + 8),*param_4);
          return 0x815800a;
        }
        lVar3 = lVar3 + 8 + (ulong)(iVar5 + 4);
        *(char *)((long)puVar11 + lVar1 + 8) = *param_2;
        if (*param_2 == '\0') {
          *(undefined1 *)(lVar3 + 1 + (long)puVar11) = 0;
        }
        else {
          *(char *)(lVar3 + 1 + (long)puVar11) = param_2[1];
        }
        sVar8 = _strlen(param_2);
        if (sVar8 < 2) {
          *(undefined1 *)(lVar3 + 2 + (long)puVar11) = 0;
        }
        else {
          *(char *)(lVar3 + 2 + (long)puVar11) = param_2[2];
        }
        sVar8 = _strlen(param_2);
        if (sVar8 < 3) {
          *(undefined1 *)(lVar3 + 3 + (long)puVar11) = 0;
          return 0x8000000;
        }
        *(char *)(lVar3 + 3 + (long)puVar11) = param_2[3];
        return 0x8000000;
      }
    }
  }
  FUN_1008e3970("","WinRegistry",0,"OA00002.05:");
  return 0x8158002;
}

