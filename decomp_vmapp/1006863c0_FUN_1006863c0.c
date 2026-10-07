
ulong FUN_1006863c0(long *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  QString *pQVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  
  if (*(int *)(param_2[2] + 4) != 0) {
    if ((param_3 & 2) == 0) {
      pcVar5 = "Create image without write access specified";
    }
    else {
      if (*param_2 != 0) {
        pQVar1 = (QString *)(param_2 + 2);
        (**(code **)(*param_1 + 0x28))(param_1);
        (**(code **)(*param_1 + 0x1a8))(param_1,pQVar1,param_3 | 3,(int)param_1[0xc]);
        uVar4 = FUN_100685960(pQVar1,(int)param_1[3],1,param_1[8],param_1 + 1);
        uVar6 = (ulong)uVar4;
        if ((int)uVar4 < 0) {
          pcVar5 = "Plain create: Can\'t open file 0x%x";
        }
        else {
          (**(code **)(*param_1 + 0x58))(param_1,2);
          lVar2 = *param_2;
          param_1[5] = param_2[1];
          param_1[4] = lVar2;
          QString::operator=((QString *)(param_1 + 6),pQVar1);
          lVar2 = param_2[3];
          param_1[7] = lVar2;
          cVar3 = FUN_100684b20((QString *)(param_1 + 6),lVar2 * param_1[4]);
          uVar6 = 0x80021022;
          if (cVar3 != '\0') {
            uVar4 = (**(code **)(*param_1 + 0x178))(param_1,0,param_1[4],param_4);
            uVar6 = (ulong)uVar4;
            if (-1 < (int)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001006864eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (**(code **)(*param_1 + 0x18))(param_1,pQVar1,param_3);
              return uVar6;
            }
          }
          pcVar5 = "Error filling disk 0x%x";
        }
        FUN_1008e3970("","dimg",0,pcVar5,uVar6);
        return uVar6;
      }
      pcVar5 = "Error: zero passed as image size!";
    }
    FUN_1008e3970("","dimg",0,pcVar5);
  }
  return 0x80021011;
}

