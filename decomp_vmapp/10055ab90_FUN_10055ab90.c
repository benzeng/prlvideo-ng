
bool FUN_10055ab90(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_40;
  undefined8 local_38;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    cVar5 = (*(code *)*param_3)(param_2 + -2,param_1);
    if (cVar5 != '\0') {
      uVar1 = *param_1;
      *param_1 = *(undefined4 *)(param_2 + -2);
      *(undefined4 *)(param_2 + -2) = uVar1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 2) = param_2[-1];
      param_2[-1] = uVar2;
    }
    break;
  case 3:
    FUN_10055a870(param_1,param_1 + 4,param_2 + -2,param_3);
    break;
  case 4:
    FUN_10055a9a0(param_1,param_1 + 4,param_1 + 8,param_2 + -2,param_3);
    break;
  case 5:
    FUN_10055aa70(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -2,param_3);
    break;
  default:
    FUN_10055a870(param_1,param_1 + 4,param_1 + 8,param_3);
    if ((undefined8 *)(param_1 + 0xc) != param_2) {
      lVar10 = 0;
      iVar6 = 0;
      puVar3 = (undefined8 *)(param_1 + 0xc);
      puVar9 = (undefined8 *)(param_1 + 8);
      do {
        puVar7 = puVar3;
        cVar5 = (*(code *)*param_3)(puVar7,puVar9);
        if (cVar5 != '\0') {
          local_40 = *puVar7;
          local_38 = puVar7[1];
          lVar4 = lVar10;
          do {
            lVar8 = lVar4;
            *(undefined4 *)((long)param_1 + lVar8 + 0x30) =
                 *(undefined4 *)((long)param_1 + lVar8 + 0x20);
            *(undefined8 *)((long)param_1 + lVar8 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar8 + 0x28);
            if (lVar8 == -0x20) break;
            cVar5 = (*(code *)*param_3)(&local_40,(long)param_1 + lVar8 + 0x10);
            lVar4 = lVar8 + -0x10;
          } while (cVar5 != '\0');
          *(undefined4 *)((long)param_1 + lVar8 + 0x20) = (undefined4)local_40;
          *(undefined8 *)((long)param_1 + lVar8 + 0x28) = local_38;
          iVar6 = iVar6 + 1;
          if (iVar6 == 8) {
            return puVar7 + 2 == param_2;
          }
        }
        lVar10 = lVar10 + 0x10;
        puVar3 = puVar7 + 2;
        puVar9 = puVar7;
      } while (puVar7 + 2 != param_2);
    }
  }
  return true;
}

