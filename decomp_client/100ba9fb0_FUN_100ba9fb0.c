
bool FUN_100ba9fb0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *ptr;
  void *pvVar10;
  undefined8 *puVar11;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100baa410();
  }
  plVar9 = (long *)0x0;
  if (param_2 == (long *)0x0) goto LAB_100baa318;
  plVar6 = (long *)FUN_100bacae0(*param_2);
  plVar9 = (long *)0x0;
  if (plVar6 == (long *)0x0) goto LAB_100baa318;
  if ((*(long *)(*plVar6 + 0x20) == 0) || (*plVar6 != *param_2)) goto LAB_100baa30e;
  plVar9 = param_2;
  if (plVar6 == param_2) goto LAB_100baa318;
  puVar11 = (undefined8 *)plVar6[0xc];
  while (puVar11 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar11;
    (*(code *)puVar11[3])(puVar11[1]);
    FUN_100bf3910(puVar11);
    puVar11 = puVar8;
  }
  plVar6[0xc] = 0;
  for (puVar11 = (undefined8 *)param_2[0xc]; puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    lVar7 = (*(code *)puVar11[2])(puVar11[1]);
    if (lVar7 == 0) goto LAB_100baa30e;
    lVar1 = puVar11[2];
    lVar2 = puVar11[3];
    lVar3 = puVar11[4];
    for (puVar8 = (undefined8 *)plVar6[0xc]; puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)*puVar8) {
      if (((puVar8[2] == lVar1) && (puVar8[3] == lVar2)) && (puVar8[4] == lVar3))
      goto LAB_100baa30e;
    }
    plVar9 = (long *)FUN_100bf3540(0x28,"../src/snlic/sn_crypto_helper_02.c",0x18c);
    if (plVar9 == (long *)0x0) goto LAB_100baa30e;
    plVar9[1] = lVar7;
    plVar9[2] = lVar1;
    plVar9[3] = lVar2;
    plVar9[4] = lVar3;
    *plVar9 = plVar6[0xc];
    plVar6[0xc] = (long)plVar9;
  }
  plVar9 = (long *)param_2[1];
  ptr = (long *)plVar6[1];
  if (plVar9 == (long *)0x0) {
    if (ptr != (long *)0x0) {
      lVar7 = *ptr;
      if (*(code **)(lVar7 + 0x58) == (code *)0x0) {
        if ((lVar7 != 0) && (*(code **)(lVar7 + 0x50) != (code *)0x0)) {
          (**(code **)(lVar7 + 0x50))(ptr);
        }
      }
      else {
        (**(code **)(lVar7 + 0x58))(ptr);
      }
      _OPENSSL_cleanse(ptr,0x58);
      FUN_100bf3910(ptr);
      plVar6[1] = 0;
    }
LAB_100baa208:
    lVar7 = FUN_100bac3a0(plVar6 + 2,param_2 + 2);
    if ((lVar7 != 0) && (lVar7 = FUN_100bac3a0(plVar6 + 5,param_2 + 5), lVar7 != 0)) {
      *(int *)(plVar6 + 8) = (int)param_2[8];
      *(undefined4 *)((long)plVar6 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
      *(int *)(plVar6 + 9) = (int)param_2[9];
      if (param_2[10] == 0) {
        if (plVar6[10] != 0) {
          FUN_100bf3910();
        }
        plVar6[0xb] = 0;
        plVar6[10] = 0;
      }
      else {
        if (plVar6[10] != 0) {
          FUN_100bf3910();
        }
        pvVar10 = (void *)FUN_100bf3540((int)param_2[0xb],"../src/snlic/sn_crypto_helper_02.c",0xe3)
        ;
        plVar6[10] = (long)pvVar10;
        if ((pvVar10 == (void *)0x0) ||
           (_memcpy(pvVar10,(void *)param_2[10],param_2[0xb]), pvVar10 == (void *)0x0))
        goto LAB_100baa30e;
        plVar6[0xb] = param_2[0xb];
      }
      iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
      plVar9 = plVar6;
      if (iVar5 != 0) goto LAB_100baa318;
    }
  }
  else if (ptr == (long *)0x0) {
    if ((*(long *)(*plVar6 + 0x48) != 0) &&
       (ptr = (long *)FUN_100bf3540(0x58,"../src/snlic/sn_crypto_helper_02.c",0x1fe),
       ptr != (long *)0x0)) {
      lVar7 = *plVar6;
      *ptr = lVar7;
      iVar5 = (**(code **)(lVar7 + 0x48))(ptr);
      if (iVar5 != 0) {
        plVar6[1] = (long)ptr;
        plVar9 = (long *)param_2[1];
        goto LAB_100baa186;
      }
      FUN_100bf3910(ptr);
    }
    plVar6[1] = 0;
  }
  else {
LAB_100baa186:
    pcVar4 = *(code **)(*ptr + 0x60);
    if (((pcVar4 != (code *)0x0) && (*ptr == *plVar9)) &&
       ((ptr == plVar9 || (iVar5 = (*pcVar4)(ptr), iVar5 != 0)))) goto LAB_100baa208;
  }
LAB_100baa30e:
  FUN_100baa410(plVar6);
  plVar9 = (long *)0x0;
LAB_100baa318:
  *(long **)(param_1 + 8) = plVar9;
  return plVar9 != (long *)0x0;
}

