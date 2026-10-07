
int FUN_10020fe6e(void *param_1)

{
  int iVar1;
  xmlRegExecCtxtPtr pxVar2;
  xmlChar *local_88 [10];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  long local_28;
  xmlNodePtr local_20;
  xmlChar *local_18;
  long *local_10;
  
  local_2c = 0;
  local_28 = *(long *)((long)param_1 + 0xb8);
  if (*(int *)((long)param_1 + 0x118) != 0) {
    FUN_10020e8c6(param_1);
  }
  if ((*(uint *)(local_28 + 0x40) >> 9 & 1) == 0) {
    if ((*(long *)(local_28 + 0x38) != 0) && ((*(uint *)(local_28 + 0x40) >> 10 & 1) == 0)) {
      if ((*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 3) ||
         (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 2)) {
        if (*(int *)(*(long *)(local_28 + 0x38) + 0xa0) != 0x2d) {
          if (((*(uint *)(local_28 + 0x40) >> 8 ^ 1) & 1) != 0) {
            local_34 = 10;
            if (*(long *)(local_28 + 0x70) == 0) {
              pxVar2 = _xmlRegNewExecCtxt(*(xmlRegexpPtr *)(*(long *)(local_28 + 0x38) + 200),
                                          FUN_10020fd42,param_1);
              *(xmlRegExecCtxtPtr *)(local_28 + 0x70) = pxVar2;
              if (*(long *)(local_28 + 0x70) == 0) {
                FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem","failed to create a regex context"
                             );
                goto LAB_10020ffca;
              }
            }
            _xmlRegExecNextValues
                      (*(xmlRegExecCtxtPtr *)(local_28 + 0x70),&local_34,&local_38,local_88,
                       &local_30);
            iVar1 = _xmlRegExecPushString
                              (*(xmlRegExecCtxtPtr *)(local_28 + 0x70),(xmlChar *)0x0,(void *)0x0);
            if (iVar1 < 1) {
              local_2c = 1;
              *(uint *)(local_28 + 0x40) = *(uint *)(local_28 + 0x40) | 0x100;
              FUN_1001e9522(param_1,0x74f,0,0,"Missing child element(s)",local_34,local_38,local_88)
              ;
            }
            else {
              local_2c = 0;
            }
          }
          goto LAB_100210081;
        }
      }
      else {
LAB_100210081:
        if (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 2) goto LAB_100210659;
      }
      if (*(long *)((long)param_1 + 0x80) != 0) {
        _xmlSchemaFreeValue(*(undefined8 *)((long)param_1 + 0x80));
        *(undefined8 *)((long)param_1 + 0x80) = 0;
      }
      if (*(long *)(local_28 + 0x50) == 0) {
        if ((**(int **)(local_28 + 0x38) == 4) ||
           ((**(int **)(local_28 + 0x38) == 1 &&
            (*(int *)(*(long *)(local_28 + 0x38) + 0xa0) != 0x2d)))) {
          local_2c = FUN_10020fdd1(param_1,local_28,*(undefined8 *)(local_28 + 0x38),
                                   *(undefined8 *)(local_28 + 0x28));
        }
        else if ((*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 4) ||
                (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 6)) {
          local_2c = FUN_10020fdd1(param_1,local_28,
                                   *(undefined8 *)(*(long *)(local_28 + 0x38) + 0xc0),
                                   *(undefined8 *)(local_28 + 0x28));
        }
        if (local_2c < 0) {
          FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem","calling xmlSchemaVCheckCVCSimpleType()"
                       );
          goto LAB_10020ffca;
        }
      }
      else if (((*(long *)(*(long *)(local_28 + 0x50) + 0x90) == 0) ||
               (((byte)(*(uint *)(local_28 + 0x40) >> 5) & 1) != 1)) ||
              ((*(uint *)(local_28 + 0x40) >> 2 & 1) != 0)) {
        if ((*(uint *)(local_28 + 0x40) >> 2 & 1) == 0) {
          if ((**(int **)(local_28 + 0x38) == 4) ||
             ((**(int **)(local_28 + 0x38) == 1 &&
              (*(int *)(*(long *)(local_28 + 0x38) + 0xa0) != 0x2d)))) {
            local_2c = FUN_10020fdd1(param_1,local_28,*(undefined8 *)(local_28 + 0x38),
                                     *(undefined8 *)(local_28 + 0x28));
          }
          else if ((*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 4) ||
                  (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 6)) {
            local_2c = FUN_10020fdd1(param_1,local_28,
                                     *(undefined8 *)(*(long *)(local_28 + 0x38) + 0xc0),
                                     *(undefined8 *)(local_28 + 0x28));
          }
          if (local_2c == 0) {
            if ((*(long *)(*(long *)(local_28 + 0x50) + 0x90) != 0) &&
               ((*(uint *)(*(long *)(local_28 + 0x50) + 0x58) >> 3 & 1) != 0)) {
              if ((*(uint *)(local_28 + 0x40) >> 7 & 1) == 0) {
                if (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 3) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x28),
                                       *(xmlChar **)(*(long *)(local_28 + 0x50) + 0x90));
                  if (iVar1 == 0) {
                    local_2c = 0x741;
                    FUN_1001e8d5c(param_1,0x741,0,0,
                                  "The initial value \'%s\' does not match the fixed value constraint \'%s\'"
                                  ,*(undefined8 *)(local_28 + 0x28),
                                  *(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90));
                  }
                }
                else if (((*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 4) ||
                         (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 6)) &&
                        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x28),
                                              *(xmlChar **)(*(long *)(local_28 + 0x50) + 0x90)),
                        iVar1 == 0)) {
                  local_2c = 0x742;
                  FUN_1001e8d5c(param_1,0x742,0,0,
                                "The actual value \'%s\' does not match the fixed value constraint \'%s\'"
                                ,*(undefined8 *)(local_28 + 0x28),
                                *(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90));
                }
              }
              else {
                local_2c = 0x740;
                FUN_1001e8d5c(param_1,0x740,0,0,
                              "The content must not containt element nodes since there is a fixed value constraint"
                              ,0,0);
              }
            }
          }
          else if (local_2c < 0) {
            FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem",
                          "calling xmlSchemaVCheckCVCSimpleType()");
            goto LAB_10020ffca;
          }
        }
      }
      else if ((*(uint *)(local_28 + 0x40) >> 3 & 1) == 0) {
        if ((**(int **)(local_28 + 0x38) == 4) ||
           ((**(int **)(local_28 + 0x38) == 1 &&
            (*(int *)(*(long *)(local_28 + 0x38) + 0xa0) != 0x2d)))) {
          local_2c = FUN_10020fdd1(param_1,local_28,*(undefined8 *)(local_28 + 0x38),
                                   *(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90));
        }
        else if ((*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 4) ||
                (*(int *)(*(long *)(local_28 + 0x38) + 0x5c) == 6)) {
          local_2c = FUN_10020fdd1(param_1,local_28,
                                   *(undefined8 *)(*(long *)(local_28 + 0x38) + 0xc0),
                                   *(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90));
        }
        if (local_2c == 0) goto LAB_100210333;
        if (local_2c < 0) {
          FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem","calling xmlSchemaVCheckCVCSimpleType()"
                       );
          goto LAB_10020ffca;
        }
      }
      else {
        local_2c = FUN_10020fb79(param_1,*(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90),
                                 local_28 + 0x30);
        if (local_2c == 0) {
LAB_100210333:
          if (((*(uint *)((long)param_1 + 0x8c) & 1) != 0) && (*(long *)(local_28 + 8) != 0)) {
            local_18 = (xmlChar *)
                       FUN_10020d1d1(*(undefined8 *)(local_28 + 0x38),
                                     *(undefined8 *)(*(long *)(local_28 + 0x50) + 0x90));
            if (local_18 == (xmlChar *)0x0) {
              local_20 = _xmlNewText(*(xmlChar **)(*(long *)(local_28 + 0x50) + 0x90));
            }
            else {
              local_20 = _xmlNewText(local_18);
              (*(code *)_xmlFree)(local_18);
            }
            if (local_20 == (xmlNodePtr)0x0) {
              FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem","calling xmlNewText()");
              goto LAB_10020ffca;
            }
            _xmlAddChild(*(xmlNodePtr *)(local_28 + 8),local_20);
          }
        }
        else if (local_2c < 0) {
          FUN_1001e8d2a(param_1,"xmlSchemaValidatorPopElem",
                        "calling xmlSchemaCheckCOSValidDefault()");
          goto LAB_10020ffca;
        }
      }
    }
  }
  else {
    *(int *)((long)param_1 + 0x120) = *(int *)((long)param_1 + 0xa4) + -1;
  }
LAB_100210659:
  if (*(int *)((long)param_1 + 0xa4) < 0) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0xa4) == *(int *)((long)param_1 + 0x120)) {
    *(undefined4 *)((long)param_1 + 0x120) = 0xffffffff;
  }
  iVar1 = FUN_10020a930(param_1,*(undefined4 *)((long)param_1 + 0xa4));
  if (((iVar1 != -1) && (iVar1 = FUN_10020c05e(param_1), iVar1 != -1)) &&
     ((*(long *)(local_28 + 0x60) == 0 ||
      ((*(int *)((long)param_1 + 0xa4) < 1 || (iVar1 = FUN_10020b950(param_1), iVar1 != -1)))))) {
    FUN_10020c757(local_28);
    if (*(int *)((long)param_1 + 0xa4) == 0) {
      *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
      *(undefined8 *)((long)param_1 + 0xb8) = 0;
      return 0;
    }
    if (*(long *)((long)param_1 + 0xc0) != 0) {
      local_10 = *(long **)((long)param_1 + 0xc0);
      do {
        if ((int)local_10[2] == *(int *)((long)param_1 + 0xa4)) {
          *(undefined4 *)(local_10 + 2) = 0xffffffff;
        }
        local_10 = (long *)*local_10;
      } while (local_10 != (long *)0x0);
    }
    *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0xa4) + -1;
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)(*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8)
    ;
    return local_2c;
  }
LAB_10020ffca:
  *(undefined4 *)((long)param_1 + 0x60) = 0xffffffff;
  return -1;
}

