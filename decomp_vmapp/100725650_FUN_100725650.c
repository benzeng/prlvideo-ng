
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int * FUN_100725650(char *param_1,int param_2,undefined4 *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  xmlParserCtxtPtr ctxt;
  int *piVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  ctxt = _xmlCreatePushParserCtxt
                   ((xmlSAXHandlerPtr)&DAT_10116e6c0,&local_48,(char *)0x0,0,(char *)0x0);
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    iVar5 = _xmlParseChunk(ctxt,param_1,param_2,1);
    lVar4 = local_48;
    if (iVar5 == 0) {
      _xmlFreeParserCtxt(ctxt);
      iVar5 = _strcmp(*(char **)(lVar4 + 0x18),"methodResponse");
      if ((iVar5 == 0) && (*(int *)(lVar4 + 0x30) == 1)) {
        lVar1 = *(long *)(lVar4 + 0x38);
        pcVar2 = *(char **)(lVar1 + 0x18);
        iVar5 = _strcmp(pcVar2,"params");
        if (iVar5 == 0) {
          piVar6 = _malloc(0x30);
          piVar10 = (int *)0x0;
          if (piVar6 != (int *)0x0) {
            piVar6[10] = 0;
            piVar6[0xb] = 0;
            piVar6[8] = 0;
            piVar6[9] = 0;
            piVar6[6] = 0;
            piVar6[7] = 0;
            piVar6[4] = 0;
            piVar6[5] = 0;
            piVar6[2] = 0;
            piVar6[3] = 0;
            piVar6[0] = 0;
            piVar6[1] = 0;
            *piVar6 = 6;
            pvVar7 = _malloc(0x200);
            *(void **)(piVar6 + 8) = pvVar7;
            if (pvVar7 == (void *)0x0) {
              _free(piVar6);
LAB_10072589f:
              piVar10 = (int *)0x0;
            }
            else {
              piVar6[4] = 0x40;
              piVar6[5] = 0;
              for (puVar3 = *(undefined8 **)(lVar1 + 0x38); piVar10 = piVar6,
                  puVar3 != (undefined8 *)(lVar1 + 0x38); puVar3 = (undefined8 *)*puVar3) {
                if (((*(int *)(puVar3 + 6) != 1) ||
                    (iVar5 = _strcmp((char *)puVar3[3],"param"), iVar5 != 0)) ||
                   (lVar8 = FUN_100724ff0(puVar3[7]), lVar8 == 0)) {
LAB_100725897:
                  FUN_100724b70(piVar6);
                  goto LAB_10072589f;
                }
                if (*piVar6 != 6) {
LAB_10072588f:
                  FUN_100724b70(lVar8);
                  goto LAB_100725897;
                }
                lVar9 = *(long *)(piVar6 + 2);
                if (*(long *)(piVar6 + 4) == lVar9) {
                  pvVar7 = _realloc(*(void **)(piVar6 + 8),*(long *)(piVar6 + 4) * 8 + 0x200);
                  if (pvVar7 == (void *)0x0) goto LAB_10072588f;
                  *(void **)(piVar6 + 8) = pvVar7;
                  *(long *)(piVar6 + 4) = *(long *)(piVar6 + 4) + 0x40;
                  lVar9 = *(long *)(piVar6 + 2);
                }
                else {
                  pvVar7 = *(void **)(piVar6 + 8);
                }
                *(long *)(piVar6 + 2) = lVar9 + 1;
                *(long *)((long)pvVar7 + lVar9 * 8) = lVar8;
              }
            }
          }
          *param_3 = 0;
        }
        else {
          iVar5 = _strcmp(pcVar2,"fault");
          piVar10 = (int *)0x0;
          if (iVar5 == 0) {
            piVar10 = (int *)0x0;
            if (*(int *)(lVar1 + 0x30) == 1) {
              piVar6 = (int *)FUN_100724ff0(*(undefined8 *)(lVar1 + 0x38));
              piVar10 = (int *)0x0;
              if ((piVar6 != (int *)0x0) && (piVar10 = piVar6, *piVar6 != 7)) {
                FUN_100724b70(piVar6);
                piVar10 = (int *)0x0;
              }
            }
            *param_3 = 1;
          }
        }
        FUN_1007258d0(lVar4);
      }
      else {
        FUN_1007258d0(lVar4);
        piVar10 = (int *)0x0;
      }
    }
    else {
      _xmlFreeParserCtxt(ctxt);
      piVar10 = (int *)0x0;
    }
  }
  return piVar10;
}

