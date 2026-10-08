
void FUN_100ca7900(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_100c60800();
  if (0 < iVar2) {
    FUN_100c5c0c0(param_2,"%*s%s:\n",param_3,"",param_4);
  }
  iVar2 = FUN_100c60800(param_1);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      puVar4 = (undefined8 *)FUN_100c60820(param_1,iVar2);
      FUN_100c5c0c0(param_2,"%*s",param_3 + 2,"");
      if (*(int *)*puVar4 == 7) {
        piVar1 = *(int **)((int *)*puVar4 + 2);
        iVar3 = *piVar1;
        puVar6 = *(undefined1 **)(piVar1 + 2);
        FUN_100c58a70(param_2,"IP:");
        iVar5 = 0;
        if (iVar3 == 0x20) {
          while (FUN_100c5c0c0(param_2,"%X",CONCAT11(*puVar6,puVar6[1])), iVar5 != 0xf) {
            if (iVar5 == 7) {
              FUN_100c58a70(param_2,"/");
              iVar5 = 8;
            }
            else {
              FUN_100c58a70(param_2,":");
              iVar5 = iVar5 + 1;
              if (iVar5 == 0x10) break;
            }
            puVar6 = puVar6 + 2;
          }
        }
        else if (iVar3 == 8) {
          FUN_100c5c0c0(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",*puVar6,puVar6[1],puVar6[2],puVar6[3],
                        puVar6[4],puVar6[5],puVar6[6],puVar6[7]);
        }
        else {
          FUN_100c5c0c0(param_2,"IP Address:<invalid>");
        }
      }
      else {
        FUN_100ca12d0(param_2);
      }
      FUN_100c58a70(param_2,"\n");
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(param_1);
    } while (iVar2 < iVar3);
  }
  return;
}

