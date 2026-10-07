
void FUN_1001ebc95(long *param_1)

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
          FUN_1001eb793(puVar3);
        }
        else if (uVar1 < 0x11) {
          if (uVar1 < 9) {
            if (uVar1 < 6) {
              if (uVar1 == 2) {
LAB_1001ebe35:
                _xmlSchemaFreeWildcard(puVar3);
              }
              else {
                if ((uVar1 < 2) || (uVar1 < 4)) goto LAB_1001ebd47;
                FUN_1001ebc5e(puVar3);
              }
            }
            else {
              FUN_1001ebc26(puVar3);
            }
          }
          else if (uVar1 == 0xe) {
            FUN_1001eb9c6(puVar3);
          }
          else if (uVar1 == 0xf) {
            FUN_1001eb680(puVar3);
          }
          else {
LAB_1001ebd47:
            uVar4 = FUN_1001e6a14(*puVar3);
            FUN_1001e83b4(0,
                          "Internal error: xmlSchemaComponentListFree, unexpected component type \'%s\'\n"
                          ,uVar4);
          }
        }
        else if (uVar1 < 0x19) {
          if (uVar1 < 0x16) {
            if (uVar1 == 0x12) {
              FUN_1001eb65b(puVar3);
            }
            else {
              if (0x11 < uVar1) {
                if (uVar1 == 0x15) goto LAB_1001ebe35;
                goto LAB_1001ebd47;
              }
              FUN_1001ebbee(puVar3);
            }
          }
          else {
            FUN_1001eb8dd(puVar3);
          }
        }
        else if (uVar1 == 0x19) {
          if (*(long *)(puVar3 + 2) != 0) {
            FUN_1001eb5fe(*(undefined8 *)(puVar3 + 2));
          }
          (*(code *)_xmlFree)(puVar3);
        }
        else {
          if (uVar1 != 2000) goto LAB_1001ebd47;
          FUN_1001eb80c(puVar3);
        }
      }
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

