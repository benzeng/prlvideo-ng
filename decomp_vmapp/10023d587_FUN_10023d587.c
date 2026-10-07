
int FUN_10023d587(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  xmlGenericErrorFunc pxVar4;
  int iVar5;
  xmlChar *str1;
  xmlChar *pxVar6;
  xmlGenericErrorFunc *ppxVar7;
  void **ppvVar8;
  int local_a0;
  int local_8c;
  long local_70;
  long local_60;
  byte *local_48;
  byte *local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_a0 = 0;
  pxVar6 = *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20);
  switch(*param_2) {
  case 0:
    if ((pxVar6 != (xmlChar *)0x0) && (*pxVar6 != '\0')) {
      for (local_8c = 0;
          (pxVar6[local_8c] == ' ' ||
          (((8 < pxVar6[local_8c] && (pxVar6[local_8c] < 0xb)) || (pxVar6[local_8c] == '\r'))));
          local_8c = local_8c + 1) {
      }
      if (pxVar6[local_8c] != '\0') {
        local_a0 = -1;
      }
    }
    break;
  default:
    ppxVar7 = ___xmlGenericError();
    pxVar4 = *ppxVar7;
    ppvVar8 = ___xmlGenericErrorContext();
    (*pxVar4)(*ppvVar8,"Unimplemented block at %s:%d\n","relaxng.c",0x2260);
    local_a0 = -1;
    break;
  case 2:
    for (local_28 = *(long *)(param_2 + 0xc); local_a0 = 0, local_28 != 0;
        local_28 = *(long *)(local_28 + 0x40)) {
      iVar5 = FUN_10023d587(param_1,local_28);
      if (iVar5 == 0) {
        return -1;
      }
    }
    break;
  case 3:
    break;
  case 5:
    local_a0 = FUN_10023d175(param_1,pxVar6,param_2,*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
    if (local_a0 == 0) {
      FUN_10023d46f(param_1);
    }
    break;
  case 7:
    iVar5 = _xmlStrEqual(pxVar6,*(xmlChar **)(param_2 + 8));
    if (iVar5 == 0) {
      if (*(long *)(param_2 + 4) == 0) {
        str1 = (xmlChar *)FUN_10023cfee(param_1,*(undefined8 *)(param_2 + 8));
        pxVar6 = (xmlChar *)FUN_10023cfee(param_1,pxVar6);
        if (((str1 == (xmlChar *)0x0) || (pxVar6 == (xmlChar *)0x0)) ||
           (iVar5 = _xmlStrEqual(str1,pxVar6), iVar5 == 0)) {
          local_a0 = -1;
        }
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        if (pxVar6 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar6);
        }
      }
      else {
        lVar2 = *(long *)(param_2 + 10);
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
          local_a0 = -1;
        }
        else {
          local_a0 = (**(code **)(lVar2 + 0x20))
                               (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 4),
                                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 2),
                                *(undefined8 *)(param_2 + 0x12),pxVar6,
                                **(undefined8 **)(param_1 + 0x60));
        }
        if (local_a0 < 0) {
          FUN_100230bfa(param_1,5,*(undefined8 *)(param_2 + 4),0,0);
          return -1;
        }
        if (local_a0 == 1) {
          local_a0 = 0;
        }
        else {
          local_a0 = -1;
        }
      }
    }
    if (local_a0 == 0) {
      FUN_10023d46f(param_1);
    }
    break;
  case 8:
    local_60 = *(long *)(param_2 + 0xc);
    pxVar6 = *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28);
    local_48 = _xmlStrdup(pxVar6);
    if (local_48 == (byte *)0x0) {
      local_48 = _xmlStrdup((xmlChar *)"");
    }
    if (local_48 == (byte *)0x0) {
      FUN_100230bfa(param_1,6,0,0,0);
      return -1;
    }
    local_40 = local_48;
    while (*local_40 != 0) {
      if (((*local_40 == 0x20) || ((8 < *local_40 && (*local_40 < 0xb)))) || (*local_40 == 0xd)) {
        *local_40 = 0;
        while (((local_40 = local_40 + 1, *local_40 == 0x20 ||
                ((8 < *local_40 && (*local_40 < 0xb)))) || (*local_40 == 0xd))) {
          *local_40 = 0;
        }
      }
      else {
        local_40 = local_40 + 1;
      }
    }
    *(byte **)(*(long *)(param_1 + 0x60) + 0x28) = local_40;
    for (local_40 = local_48;
        (*local_40 == 0 && (*(byte **)(*(long *)(param_1 + 0x60) + 0x28) != local_40));
        local_40 = local_40 + 1) {
    }
    *(byte **)(*(long *)(param_1 + 0x60) + 0x20) = local_40;
    for (; local_60 != 0; local_60 = *(long *)(local_60 + 0x40)) {
      if (*(long *)(*(long *)(param_1 + 0x60) + 0x20) == *(long *)(*(long *)(param_1 + 0x60) + 0x28)
         ) {
        *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = 0;
      }
      local_a0 = FUN_10023d587(param_1,local_60);
      if (local_a0 != 0) break;
    }
    if (((local_a0 == 0) && (*(long *)(*(long *)(param_1 + 0x60) + 0x20) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0x60) + 0x20) != *(long *)(*(long *)(param_1 + 0x60) + 0x28)))
    {
      FUN_100230bfa(param_1,8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20),0,0);
      local_a0 = -1;
    }
    (*(code *)_xmlFree)(local_48);
    *(xmlChar **)(*(long *)(param_1 + 0x60) + 0x20) = pxVar6;
    *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28) = uVar3;
    break;
  case 10:
  case 0x12:
    for (local_20 = *(long *)(param_2 + 0xc); local_a0 = 0, local_20 != 0;
        local_20 = *(long *)(local_20 + 0x40)) {
      iVar5 = FUN_10023d587(param_1,local_20);
      if (iVar5 != 0) {
        return -1;
      }
    }
    break;
  case 0xb:
  case 0xd:
    local_a0 = FUN_10023d587(param_1,*(undefined8 *)(param_2 + 0xc));
    break;
  case 0x10:
    local_a0 = FUN_10023d540(param_1,*(undefined8 *)(param_2 + 0xc));
    if (local_a0 != 0) {
      return local_a0;
    }
  case 0xf:
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    local_38 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
    local_30 = 0;
    while( true ) {
      if (((local_38 == 0) || (*(long *)(*(long *)(param_1 + 0x60) + 0x28) == local_38)) ||
         (local_30 == local_38)) goto LAB_10023ddb9;
      local_30 = local_38;
      iVar5 = FUN_10023d540(param_1,*(undefined8 *)(param_2 + 0xc));
      if (iVar5 != 0) break;
      local_38 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
      local_a0 = 0;
    }
    *(long *)(*(long *)(param_1 + 0x60) + 0x20) = local_38;
    local_a0 = 0;
LAB_10023ddb9:
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    if (local_a0 == 0) {
      if (0 < *(int *)(param_1 + 0x50)) {
        FUN_10023094e(param_1,0);
      }
    }
    else if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
      FUN_100230a38(param_1);
    }
    break;
  case 0x11:
    local_70 = *(long *)(param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20);
    while ((local_70 != 0 && (local_a0 = FUN_10023d587(param_1,local_70), local_a0 != 0))) {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20) = uVar3;
      local_70 = *(long *)(local_70 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    if (local_a0 == 0) {
      if (0 < *(int *)(param_1 + 0x50)) {
        FUN_10023094e(param_1,0);
      }
    }
    else if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
      FUN_100230a38(param_1);
    }
  }
  return local_a0;
}

