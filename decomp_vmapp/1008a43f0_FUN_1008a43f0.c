
bool FUN_1008a43f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  
  bVar6 = true;
  if (param_3 != (undefined8 *)0x0) {
    if (*(int *)(param_3 + 2) == 0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = "-";
    }
    iVar2 = FUN_10087da20(param_1,param_5,0x80);
    bVar6 = false;
    if (iVar2 != 0) {
      if (*(int *)(param_3 + 1) == 0) {
        iVar2 = FUN_100880ec0(param_1,"%s 0\n",param_2);
        bVar6 = 0 < iVar2;
      }
      else {
        iVar2 = FUN_10084b410(param_3);
        if (iVar2 + 7 < 0x48) {
          iVar2 = FUN_100880ec0(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar8,
                                *(undefined8 *)*param_3,pcVar8,*(undefined8 *)*param_3);
LAB_1008a45f1:
          bVar6 = false;
          if (0 < iVar2) {
            bVar6 = true;
          }
        }
        else {
          *param_4 = 0;
          if (*pcVar8 == '-') {
            pcVar8 = " (Negative)";
          }
          else {
            pcVar8 = "";
          }
          bVar6 = false;
          iVar2 = FUN_100880ec0(param_1,"%s%s",param_2,pcVar8);
          if (0 < iVar2) {
            iVar2 = FUN_10084bdf0(param_3,param_4 + 1);
            puVar9 = param_4 + 1;
            if ((char)param_4[1] < '\0') {
              puVar9 = param_4;
            }
            bVar5 = (byte)param_4[1] >> 7;
            lVar7 = 0;
            do {
              if ((int)((uint)bVar5 + iVar2) <= lVar7) {
                iVar2 = FUN_10087d780(param_1,"\n",1);
                goto LAB_1008a45f1;
              }
              iVar4 = (int)lVar7;
              if (iVar4 == (iVar4 / 0xf) * 0xf) {
                iVar3 = FUN_10087d870(param_1,"\n");
                if (iVar3 < 1) {
                  return false;
                }
                iVar3 = FUN_10087da20(param_1,param_5 + 4,0x80);
                if (iVar3 == 0) {
                  return false;
                }
              }
              puVar1 = puVar9 + lVar7;
              lVar7 = lVar7 + 1;
              pcVar8 = ":";
              if (iVar2 + -1 + (uint)bVar5 == iVar4) {
                pcVar8 = "";
              }
              bVar6 = false;
              iVar4 = FUN_100880ec0(param_1,"%02x%s",*puVar1,pcVar8);
            } while (0 < iVar4);
          }
        }
      }
    }
  }
  return bVar6;
}

