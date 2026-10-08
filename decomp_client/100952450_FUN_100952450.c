
undefined4
FUN_100952450(int param_1,long param_2,xmlChar *param_3,int param_4,int param_5,long param_6,
             xmlChar *param_7,int param_8)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  undefined4 uVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  undefined4 local_64;
  xmlChar *local_30;
  xmlChar *local_28;
  
  switch(param_1) {
  case 0:
  case 0x2d:
    local_64 = 0xfffffffe;
    break;
  case 1:
  case 2:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
  case 0x1d:
  case 0x2e:
    local_30 = param_3;
    if (param_2 != 0) {
      local_30 = *(xmlChar **)(param_2 + 0x10);
    }
    if (param_6 == 0) {
      local_28 = param_7;
    }
    else {
      local_28 = *(xmlChar **)(param_6 + 0x10);
    }
    if (param_5 == 0x15) {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0x1257);
      if (param_6 == 0) {
        local_64 = 0xfffffffe;
      }
      else {
        local_64 = 0xfffffffe;
      }
    }
    else {
      if ((((((param_5 == 0x2e) || (param_5 == 1)) ||
            ((param_5 == 2 ||
             ((((param_5 == 0x10 || (param_5 == 0x11)) || (param_5 == 0x12)) ||
              ((param_5 == 0x14 || (param_5 == 0x16)))))))) || (param_5 == 0x17)) ||
          ((param_5 == 0x18 || (param_5 == 0x1a)))) || (param_5 == 0x1d)) {
        if (param_4 == 1) {
          if (param_8 == 1) {
            iVar2 = _xmlStrEqual(local_30,local_28);
            if (iVar2 != 0) {
              return 0;
            }
            return 2;
          }
          if (param_8 == 2) {
            uVar3 = FUN_1009517af(local_30,local_28,0);
            return uVar3;
          }
          if (param_8 == 3) {
            uVar3 = FUN_100951919(local_30,local_28,0);
            return uVar3;
          }
        }
        else if (param_4 == 2) {
          if (param_8 == 1) {
            uVar3 = FUN_1009517af(local_28,local_30,1);
            return uVar3;
          }
          if (param_8 == 2) {
            uVar3 = FUN_100951e17(local_30,local_28);
            return uVar3;
          }
          if (param_8 == 3) {
            uVar3 = FUN_100951b5b(local_30,local_28,0);
            return uVar3;
          }
        }
        else {
          if (param_4 != 3) {
            return 0xfffffffe;
          }
          if (param_8 == 1) {
            uVar3 = FUN_100951919(local_28,local_30,1);
            return uVar3;
          }
          if (param_8 == 2) {
            uVar3 = FUN_100951b5b(local_28,local_30,1);
            return uVar3;
          }
          if (param_8 == 3) {
            uVar3 = FUN_100951fa5(local_30,local_28);
            return uVar3;
          }
        }
      }
      local_64 = 0xfffffffe;
    }
    break;
  case 3:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (param_5 == param_1) {
      local_64 = FUN_10094eb42(param_2,param_6);
    }
    else if ((((((param_5 == 3) || (param_5 == 0x1e)) || (param_5 == 0x1f)) ||
              (((param_5 == 0x20 || (param_5 == 0x21)) ||
               ((param_5 == 0x22 || ((param_5 == 0x23 || (param_5 == 0x24)))))))) ||
             ((param_5 == 0x25 || (((param_5 == 0x26 || (param_5 == 0x27)) || (param_5 == 0x28))))))
            || ((param_5 == 0x29 || (param_5 == 0x2a)))) {
      local_64 = FUN_10094eb42(param_2,param_6);
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (((((param_5 == 0xb) || (param_5 == 4)) || (param_5 == 5)) ||
             ((param_5 == 6 || (param_5 == 7)))) ||
            ((param_5 == 8 || ((param_5 == 10 || (param_5 == 9)))))) {
      local_64 = FUN_100950a25(param_2,param_6);
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0xc:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (param_5 == 0xc) {
      local_64 = FUN_10094ef3b(param_2,param_6);
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0xd:
  case 0xe:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if ((param_5 == 0xd) || (param_5 == 0xe)) {
      local_64 = FUN_10095223a(param_2,param_6);
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0xf:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (param_5 == 0xf) {
      if (*(int *)(param_2 + 0x10) == *(int *)(param_6 + 0x10)) {
        local_64 = 0;
      }
      else if (*(int *)(param_2 + 0x10) == 0) {
        local_64 = 0xffffffff;
      }
      else {
        local_64 = 1;
      }
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0x13:
  case 0x19:
  case 0x1b:
    ppxVar4 = ___xmlGenericError();
    pxVar1 = *ppxVar4;
    ppvVar5 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar5,"Unimplemented block at %s:%d\n","xmlschemastypes.c",0x12d4);
  default:
    local_64 = 0xfffffffe;
    break;
  case 0x15:
  case 0x1c:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if ((param_5 == 0x15) || (param_5 == 0x1c)) {
      iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_6 + 0x10));
      if ((iVar2 == 0) ||
         (iVar2 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x18),*(xmlChar **)(param_6 + 0x18)),
         iVar2 == 0)) {
        local_64 = 2;
      }
      else {
        local_64 = 0;
      }
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0x2b:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (param_5 == 0x2b) {
      if (*(int *)(param_2 + 0x18) == *(int *)(param_6 + 0x18)) {
        iVar2 = _xmlStrcmp(*(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_6 + 0x10));
        if (0 < iVar2) {
          return 1;
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      else if (*(uint *)(param_6 + 0x18) < *(uint *)(param_2 + 0x18)) {
        return 1;
      }
      local_64 = 0xffffffff;
    }
    else {
      local_64 = 0xfffffffe;
    }
    break;
  case 0x2c:
    if ((param_2 == 0) || (param_6 == 0)) {
      local_64 = 0xfffffffe;
    }
    else if (param_5 == 0x2c) {
      if (*(int *)(param_2 + 0x18) == *(int *)(param_6 + 0x18)) {
        iVar2 = _xmlStrcmp(*(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_6 + 0x10));
        if (iVar2 < 1) {
          if (iVar2 == 0) {
            local_64 = 0;
          }
          else {
            local_64 = 0xffffffff;
          }
        }
        else {
          local_64 = 1;
        }
      }
      else if (*(uint *)(param_6 + 0x18) < *(uint *)(param_2 + 0x18)) {
        local_64 = 1;
      }
      else {
        local_64 = 0xffffffff;
      }
    }
    else {
      local_64 = 0xfffffffe;
    }
  }
  return local_64;
}

