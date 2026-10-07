
int FUN_10037b630(long *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 uVar10;
  
  uVar8 = 0;
  do {
    lVar1 = *param_1;
    uVar7 = 0;
    if (lVar1 != 0) {
      uVar7 = (uint)*(byte *)(lVar1 + 0x29);
    }
    if ((uVar7 >> (uVar8 & 0x1f) & 1) != 0) {
      if (lVar1 == 0) {
        cVar6 = '\0';
      }
      else {
        lVar2 = *(long *)(lVar1 + 8);
        cVar6 = '\b';
        if (lVar2 != 0) {
          pcVar9 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar9 = (char *)(lVar2 + 0x7c);
          }
          cVar6 = *pcVar9;
        }
      }
      if (cVar6 == '\b') {
        pcVar9 = "";
      }
      else {
        pcVar9 = "I2F";
        if (cVar6 != '\x02') {
          if (cVar6 == '\x01') {
            pcVar9 = "U2F";
          }
          else {
            pcVar9 = (char *)0x0;
          }
        }
      }
      uVar10 = 0;
      uVar4 = 0;
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
        uVar4 = 8;
        if (lVar1 != 0) {
          puVar5 = (undefined1 *)(*(long *)(lVar1 + 0x80) + 0x48);
          if (*(long *)(lVar1 + 0x80) == 0) {
            puVar5 = (undefined1 *)(lVar1 + 0x7c);
          }
          uVar4 = *puVar5;
        }
      }
      uVar3 = FUN_1003a7a00(uVar4);
      if (*param_1 != 0) {
        uVar10 = *(undefined1 *)(*param_1 + 0x2a);
      }
      FUN_10038e8e0(param_3,"gl_ClipDistance[%d] = %s(%sO[%d]%s);\n",param_2,pcVar9,uVar3,uVar10,
                    (&PTR_s__100bbc340)[(uint)(1 << ((byte)uVar8 & 0x1f))]);
      param_2 = param_2 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 4);
  return param_2;
}

