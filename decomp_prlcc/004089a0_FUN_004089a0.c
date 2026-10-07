
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004089a0(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined4 *__s;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar13 = (long)param_2 * 0x80;
  cVar6 = FUN_004033d0(0);
  if (((cVar6 == '\0') ||
      (iVar7 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x1b0))(param_1,&local_34,&local_38),
      iVar7 == 0)) ||
     (lVar8 = (*(code *)**(undefined8 **)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10))(param_1), lVar8 == 0))
  {
    __s = (undefined4 *)0x0;
  }
  else {
    __s = operator_new(0x48);
    memset(__s,0,0x48);
    *(long *)(__s + 0x10) = lVar8;
    *__s = local_34;
    __s[1] = local_38;
    uVar2 = *(uint *)(lVar13 + 0x18 + *(long *)(param_1 + 0xe8));
    __s[2] = uVar2;
    __s[3] = *(undefined4 *)(lVar13 + 0x1c + *(long *)(param_1 + 0xe8));
    uVar3 = *(uint *)(lVar13 + 0x20 + *(long *)(param_1 + 0xe8));
    __s[4] = uVar3;
    iVar7 = *(int *)(lVar13 + 0x24 + *(long *)(param_1 + 0xe8));
    __s[6] = 0x60;
    __s[7] = 0x60;
    __s[5] = iVar7;
    fVar5 = _DAT_0041796c;
    fVar4 = DAT_00417968;
    if (((uVar2 != 0) && (__s[3] != 0)) && ((uVar3 != 0 && (iVar7 != 0)))) {
      __s[6] = (int)((float)uVar2 / ((float)uVar3 / DAT_00417968) + _DAT_0041796c);
      __s[7] = (int)((float)(uint)__s[3] / ((float)(uint)__s[5] / fVar4) + fVar5);
    }
    iVar7 = *(int *)(lVar8 + 0x20);
    __s[0xe] = iVar7;
    if (0 < iVar7) {
      pvVar9 = operator_new__((long)iVar7 * 0x18);
      *(void **)(__s + 0xc) = pvVar9;
      memset(pvVar9,0,(long)(int)__s[0xe] * 0x18);
      if (0 < (int)__s[0xe]) {
        iVar7 = 0;
        lVar14 = 0;
        lVar13 = 0;
        do {
          lVar10 = (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x18))
                             (param_1,lVar8,*(undefined8 *)(*(long *)(lVar8 + 0x28) + lVar14));
          *(undefined8 *)(*(long *)(__s + 0xc) + 8 + lVar13) =
               *(undefined8 *)(*(long *)(lVar8 + 0x28) + lVar14);
          *(long *)(*(long *)(__s + 0xc) + lVar13) = lVar10;
          *(undefined4 *)(*(long *)(__s + 0xc) + 0x10 + lVar13) = 0xffffffff;
          iVar7 = iVar7 + 1;
          lVar14 = lVar14 + 8;
          *(uint *)(*(long *)(__s + 0xc) + 0x14 + lVar13) = (uint)(*(short *)(lVar10 + 0x30) == 0);
          lVar13 = lVar13 + 0x18;
        } while (iVar7 < (int)__s[0xe]);
      }
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    __s[10] = iVar7;
    if (0 < iVar7) {
      pvVar9 = operator_new__((long)iVar7 * 0x18);
      *(void **)(__s + 8) = pvVar9;
      memset(pvVar9,0,(long)(int)__s[10] * 0x18);
      if (0 < (int)__s[10]) {
        iVar7 = 0;
        lVar14 = 0;
        lVar13 = 0;
        do {
          iVar7 = iVar7 + 1;
          uVar11 = (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x20))
                             (param_1,lVar8,*(undefined8 *)(*(long *)(lVar8 + 0x18) + lVar14));
          puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x18) + lVar14);
          lVar14 = lVar14 + 8;
          *(undefined8 *)(*(long *)(__s + 8) + 8 + lVar13) = *puVar1;
          *(undefined8 *)(*(long *)(__s + 8) + lVar13) = uVar11;
          *(undefined4 *)(*(long *)(__s + 8) + 0x10 + lVar13) = 0xffffffff;
          lVar13 = lVar13 + 0x18;
        } while (iVar7 < (int)__s[10]);
      }
    }
    if (0 < (int)__s[0xe]) {
      iVar7 = 0;
      lVar13 = 0;
      do {
        lVar8 = *(long *)(lVar13 + *(long *)(__s + 0xc));
        if (0 < (int)__s[10]) {
          iVar12 = 0;
          lVar14 = 0;
          do {
            if (*(long *)(lVar8 + 8) == *(long *)(*(long *)(__s + 8) + 8 + lVar14)) {
              *(int *)(lVar13 + 0x10 + *(long *)(__s + 0xc)) = iVar12;
              *(int *)(*(long *)(__s + 8) + 0x10 + lVar14) = iVar7;
            }
            iVar12 = iVar12 + 1;
            lVar14 = lVar14 + 0x18;
          } while (iVar12 < (int)__s[10]);
        }
        iVar7 = iVar7 + 1;
        lVar13 = lVar13 + 0x18;
      } while (iVar7 < (int)__s[0xe]);
    }
  }
  return __s;
}

