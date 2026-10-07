
void FUN_10036c290(undefined8 param_1,long *param_2,undefined8 param_3,char param_4,char param_5)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  
  lVar11 = *param_2;
  iVar9 = ((int)param_2[1] - (int)lVar11) * -0x55555555;
  if (iVar9 != 0) {
    uVar10 = iVar9 - 1;
    while( true ) {
      lVar6 = (ulong)uVar10 * 3;
      pcVar1 = (char *)(lVar11 + lVar6);
      if ((param_5 == '\0') || (*pcVar1 != '\x05')) {
        if (param_4 == '\0') {
          bVar12 = false;
        }
        else {
          bVar12 = *pcVar1 == '\n';
        }
        pcVar7 = "";
        if (bVar12) {
          pcVar7 = "flat ";
        }
        bVar3 = *(byte *)(lVar11 + 1 + lVar6);
        uVar2 = ((bVar3 >> 3 & 1) - 1) +
                (uint)(bVar3 >> 1 & 1) + (bVar3 & 1) + (uint)(bVar3 >> 2 & 1);
        puVar8 = (undefined *)0x0;
        if (uVar2 < 4) {
          puVar8 = (&PTR_s_float_100bbc1f0)[(int)uVar2];
        }
        FUN_10038e8e0(param_1,"%s%s %s ",pcVar7,param_3,puVar8);
        cVar4 = *pcVar1;
        uVar5 = *(undefined1 *)(lVar11 + 2 + lVar6);
        FUN_10038e8e0(param_1,"v_");
        FUN_10036bdb0(param_1,cVar4,uVar5);
        FUN_10038e8e0(param_1,";\n");
      }
      uVar10 = uVar10 - 1;
      if (uVar10 == 0xffffffff) break;
      lVar11 = *param_2;
    }
  }
  return;
}

