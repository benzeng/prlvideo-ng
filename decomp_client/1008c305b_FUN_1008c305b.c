
void FUN_1008c305b(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  xmlElementPtr local_18;
  undefined8 *local_10;
  
  local_18 = (xmlElementPtr)0x0;
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x50) < 0xb) &&
        (uVar3 = 1L << ((byte)*(uint *)(param_1 + 0x50) & 0x3f), (uVar3 & 0x39e) == 0)) &&
       ((uVar3 & 0x460) != 0)) {
      if (((*(long *)(param_1 + 0x58) != 0) &&
          (iVar2 = FUN_1008be250(param_2,*(undefined8 *)(param_2 + 0x38),
                                 *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x58)), iVar2 == 0)) &&
         (*(int *)(param_2 + 0x40) == 1)) {
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        for (local_10 = *(undefined8 **)(param_1 + 0x60); local_10 != (undefined8 *)0x0;
            local_10 = (undefined8 *)*local_10) {
          iVar2 = FUN_1008be250(param_2,*(undefined8 *)(param_2 + 0x38),
                                *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x50),
                                local_10[1]);
          if ((iVar2 == 0) && (*(int *)(param_2 + 0x40) == 1)) {
            *(undefined4 *)(param_2 + 0x40) = 0;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x50) == 10) {
      lVar1 = *(long *)(param_1 + 0x40);
      if (*(long *)(param_1 + 0x70) == 0) {
        FUN_1008b74a8(param_2,1,"xmlValidateAttributeCallback(%s): internal error\n",
                      *(undefined8 *)(param_1 + 0x10));
      }
      else {
        if (lVar1 != 0) {
          local_18 = _xmlGetDtdElementDesc
                               (*(xmlDtdPtr *)(lVar1 + 0x50),*(xmlChar **)(param_1 + 0x70));
        }
        if ((local_18 == (xmlElementPtr)0x0) && (lVar1 != 0)) {
          local_18 = _xmlGetDtdElementDesc
                               (*(xmlDtdPtr *)(lVar1 + 0x58),*(xmlChar **)(param_1 + 0x70));
        }
        if (((local_18 == (xmlElementPtr)0x0) && (*(long *)(param_1 + 0x28) != 0)) &&
           (*(int *)(*(long *)(param_1 + 0x28) + 8) == 0xe)) {
          local_18 = _xmlGetDtdElementDesc
                               (*(xmlDtdPtr *)(param_1 + 0x28),*(xmlChar **)(param_1 + 0x70));
        }
        if (local_18 == (xmlElementPtr)0x0) {
          FUN_1008b763a(param_2,0,0x216,"attribute %s: could not find decl for element %s\n",
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x70),0);
        }
        else if (local_18->etype == XML_ELEMENT_TYPE_EMPTY) {
          FUN_1008b763a(param_2,0,0x1fe,"NOTATION attribute %s declared for EMPTY element %s\n",
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x70),0);
          *(undefined4 *)(param_2 + 0x40) = 0;
        }
      }
    }
  }
  return;
}

