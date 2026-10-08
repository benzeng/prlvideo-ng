
void FUN_10091f5bd(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  int local_c;
  
  if ((param_1 != (long *)0x0) && ((int)param_1[1] != 0)) {
    lVar2 = *param_1;
    for (local_c = 0; local_c < (int)param_1[1]; local_c = local_c + 1) {
      puVar3 = *(uint **)((long)local_c * 8 + lVar2);
      if (puVar3 != (uint *)0x0) {
        uVar1 = *puVar3;
        if (uVar1 == 0x10) {
          FUN_10091f0bb(puVar3);
        }
        else if (uVar1 < 0x11) {
          if (uVar1 < 9) {
            if (uVar1 < 6) {
              if (uVar1 == 2) {
LAB_10091f75d:
                _xmlSchemaFreeWildcard(puVar3);
              }
              else {
                if ((uVar1 < 2) || (uVar1 < 4)) goto LAB_10091f66f;
                FUN_10091f586(puVar3);
              }
            }
            else {
              FUN_10091f54e(puVar3);
            }
          }
          else if (uVar1 == 0xe) {
            FUN_10091f2ee(puVar3);
          }
          else if (uVar1 == 0xf) {
            FUN_10091efa8(puVar3);
          }
          else {
LAB_10091f66f:
            uVar4 = FUN_10091a33c(*puVar3);
            FUN_10091bcdc(0,
                          "Internal error: xmlSchemaComponentListFree, unexpected component type \'%s\'\n"
                          ,uVar4);
          }
        }
        else if (uVar1 < 0x19) {
          if (uVar1 < 0x16) {
            if (uVar1 == 0x12) {
              FUN_10091ef83(puVar3);
            }
            else {
              if (0x11 < uVar1) {
                if (uVar1 == 0x15) goto LAB_10091f75d;
                goto LAB_10091f66f;
              }
              FUN_10091f516(puVar3);
            }
          }
          else {
            FUN_10091f205(puVar3);
          }
        }
        else if (uVar1 == 0x19) {
          if (*(long *)(puVar3 + 2) != 0) {
            FUN_10091ef26(*(undefined8 *)(puVar3 + 2));
          }
          (*(code *)_xmlFree)(puVar3);
        }
        else {
          if (uVar1 != 2000) goto LAB_10091f66f;
          FUN_10091f134(puVar3);
        }
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

