
bool FUN_1000e2390(undefined8 param_1,ushort *param_2,undefined8 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  bool bVar9;
  
  bVar9 = true;
  switch((long)param_2 - (long)param_4 >> 1) {
  case 0:
  case 1:
    break;
  case 2:
    uVar3 = param_2[-1];
    if (*param_4 < uVar3) {
      param_2[-1] = *param_4;
      *param_4 = uVar3;
    }
    break;
  case 3:
    uVar3 = param_2[-2];
    uVar4 = param_2[-1];
    uVar1 = *param_4;
    if (uVar3 < uVar4) {
      if (uVar1 < uVar3) {
        param_2[-1] = uVar1;
        *param_4 = uVar4;
        return true;
      }
      param_2[-1] = uVar3;
      param_2[-2] = uVar4;
      if (uVar4 <= *param_4) {
        return true;
      }
      param_2[-2] = *param_4;
      *param_4 = uVar4;
      return true;
    }
    if (uVar3 <= uVar1) {
      return true;
    }
    param_2[-2] = uVar1;
    *param_4 = uVar3;
    uVar3 = param_2[-2];
    uVar4 = param_2[-1];
    if (uVar4 <= uVar3) {
      return true;
    }
    goto LAB_1000e2804;
  case 4:
    uVar3 = param_2[-2];
    uVar4 = param_2[-1];
    uVar1 = param_2[-3];
    uVar2 = uVar1;
    if (uVar3 < uVar4) {
      if (uVar1 < uVar3) {
        param_2[-1] = uVar1;
      }
      else {
        param_2[-1] = uVar3;
        param_2[-2] = uVar4;
        if (uVar4 <= uVar1) goto LAB_1000e27c8;
        param_2[-2] = uVar1;
      }
      param_2[-3] = uVar4;
      uVar2 = uVar4;
    }
    else if (uVar1 < uVar3) {
      param_2[-2] = uVar1;
      param_2[-3] = uVar3;
      uVar2 = uVar3;
      if (uVar1 < uVar4) {
        param_2[-1] = uVar1;
        param_2[-2] = uVar4;
      }
    }
LAB_1000e27c8:
    if (uVar2 <= *param_4) {
      return true;
    }
    param_2[-3] = *param_4;
    *param_4 = uVar2;
    uVar3 = param_2[-3];
    uVar4 = param_2[-2];
    if (uVar4 <= uVar3) {
      return true;
    }
    param_2[-2] = uVar3;
    param_2[-3] = uVar4;
    uVar4 = param_2[-1];
    if (uVar4 <= uVar3) {
      return true;
    }
LAB_1000e2804:
    param_2[-1] = uVar3;
    param_2[-2] = uVar4;
    break;
  case 5:
    FUN_1000e2210();
    break;
  default:
    uVar3 = param_2[-2];
    uVar4 = param_2[-1];
    uVar1 = param_2[-3];
    if (uVar3 < uVar4) {
      if (uVar1 < uVar3) {
        param_2[-1] = uVar1;
      }
      else {
        param_2[-1] = uVar3;
        param_2[-2] = uVar4;
        if (uVar4 <= uVar1) goto LAB_1000e2433;
        param_2[-2] = uVar1;
      }
      param_2[-3] = uVar4;
    }
    else if (uVar1 < uVar3) {
      param_2[-2] = uVar1;
      param_2[-3] = uVar3;
      if (uVar1 < uVar4) {
        param_2[-1] = uVar1;
        param_2[-2] = uVar4;
      }
    }
LAB_1000e2433:
    puVar6 = param_2;
    puVar8 = param_2 + -2;
    do {
      puVar5 = puVar8;
      puVar7 = puVar6;
      if (param_4 + 3 == puVar7) {
        return true;
      }
      uVar3 = puVar7[-4];
      puVar6 = puVar7 + -1;
      puVar8 = puVar7 + -3;
    } while (puVar5[-1] <= uVar3);
    puVar7[-4] = puVar5[-1];
    puVar6 = puVar5;
    if (puVar5 == param_2) {
LAB_1000e24a4:
      puVar5 = puVar5 + -1;
    }
    else {
      do {
        puVar5 = puVar6;
        if (*puVar5 <= uVar3) goto LAB_1000e24a4;
        puVar5[-1] = *puVar5;
        puVar6 = puVar5 + 1;
      } while (param_2 != puVar5 + 1);
    }
    *puVar5 = uVar3;
    puVar6 = puVar7 + -3;
    puVar8 = puVar7 + -4;
    do {
      puVar7 = puVar8;
      puVar5 = puVar6;
      if (puVar7 == param_4) {
        return true;
      }
      uVar3 = puVar5[-2];
      puVar8 = puVar5 + -2;
      puVar6 = puVar7;
    } while (puVar5[-1] <= uVar3);
    puVar7[-1] = puVar5[-1];
    for (; (puVar5 != param_2 && (uVar3 < *puVar5)); puVar5 = puVar5 + 1) {
      puVar5[-1] = *puVar5;
    }
    puVar5[-1] = uVar3;
    do {
      puVar5 = puVar8;
      puVar6 = puVar7;
      if (param_4 == puVar5) {
        return true;
      }
      uVar3 = puVar5[-1];
      puVar7 = puVar5;
      puVar8 = puVar5 + -1;
    } while (puVar6[-1] <= uVar3);
    puVar5[-1] = puVar6[-1];
    for (; (puVar6 != param_2 && (uVar3 < *puVar6)); puVar6 = puVar6 + 1) {
      puVar6[-1] = *puVar6;
    }
    puVar6[-1] = uVar3;
    puVar6 = puVar5 + -1;
    do {
      puVar7 = puVar6;
      puVar8 = puVar5;
      if (puVar7 == param_4) {
        return true;
      }
      uVar3 = puVar8[-2];
      puVar6 = puVar8 + -2;
      puVar5 = puVar7;
    } while (puVar8[-1] <= uVar3);
    puVar7[-1] = puVar8[-1];
    for (; (puVar8 != param_2 && (uVar3 < *puVar8)); puVar8 = puVar8 + 1) {
      puVar8[-1] = *puVar8;
    }
    puVar8[-1] = uVar3;
    do {
      puVar5 = puVar6;
      puVar8 = puVar7;
      if (param_4 == puVar5) {
        return true;
      }
      uVar3 = puVar5[-1];
      puVar7 = puVar5;
      puVar6 = puVar5 + -1;
    } while (puVar8[-1] <= uVar3);
    puVar5[-1] = puVar8[-1];
    for (; (puVar8 != param_2 && (uVar3 < *puVar8)); puVar8 = puVar8 + 1) {
      puVar8[-1] = *puVar8;
    }
    puVar8[-1] = uVar3;
    do {
      puVar7 = puVar6;
      puVar8 = puVar5;
      if (puVar7 == param_4) {
        return true;
      }
      uVar3 = puVar8[-2];
      puVar6 = puVar8 + -2;
      puVar5 = puVar7;
    } while (puVar8[-1] <= uVar3);
    puVar7[-1] = puVar8[-1];
    for (; (puVar8 != param_2 && (uVar3 < *puVar8)); puVar8 = puVar8 + 1) {
      puVar8[-1] = *puVar8;
    }
    puVar8[-1] = uVar3;
    do {
      puVar5 = puVar6;
      puVar8 = puVar7;
      if (param_4 == puVar5) {
        return true;
      }
      uVar3 = puVar5[-1];
      puVar7 = puVar5;
      puVar6 = puVar5 + -1;
    } while (puVar8[-1] <= uVar3);
    puVar5[-1] = puVar8[-1];
    for (; (puVar8 != param_2 && (uVar3 < *puVar8)); puVar8 = puVar8 + 1) {
      puVar8[-1] = *puVar8;
    }
    puVar8[-1] = uVar3;
    do {
      puVar7 = puVar6;
      puVar8 = puVar5;
      if (puVar7 == param_4) {
        return true;
      }
      uVar3 = puVar8[-2];
      puVar6 = puVar8 + -2;
      puVar5 = puVar7;
    } while (puVar8[-1] <= uVar3);
    puVar7[-1] = puVar8[-1];
    for (; (puVar8 != param_2 && (uVar3 < *puVar8)); puVar8 = puVar8 + 1) {
      puVar8[-1] = *puVar8;
    }
    puVar8[-1] = uVar3;
    bVar9 = puVar6 == param_4;
  }
  return bVar9;
}

