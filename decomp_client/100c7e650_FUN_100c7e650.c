
undefined4 FUN_100c7e650(undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  
  bVar12 = (param_3 & 0xf0000) == 0x40000;
  uVar11 = 0x20;
  if (bVar12) {
    uVar11 = 10;
  }
  uVar3 = 0xc;
  if (!bVar12) {
    uVar3 = 0;
  }
  uVar9 = 0x10;
  if (param_3 != 0) {
    uVar9 = uVar3;
  }
  lVar2 = *param_2;
  if ((param_4 & 1) == 0) {
    iVar4 = FUN_100c58980(param_1,"Certificate:\n",0xd);
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"    Data:\n",10);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((param_4 & 2) == 0) {
    lVar5 = FUN_100c76990(*(undefined8 *)*param_2);
    iVar4 = FUN_100c5c0c0(param_1,"%8sVersion: %lu (0x%lx)\n","",lVar5 + 1,lVar5);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((param_4 & 4) == 0) {
    iVar4 = FUN_100c58980(param_1,"        Serial Number:",0x16);
    if (iVar4 < 1) {
      return 0;
    }
    piVar6 = (int *)FUN_100c926a0(param_2);
    if (*piVar6 < 9) {
      lVar7 = FUN_100c76990(piVar6);
      lVar5 = -lVar7;
      if (piVar6[1] != 0x102) {
        lVar5 = lVar7;
      }
      pcVar10 = "";
      if (piVar6[1] == 0x102) {
        pcVar10 = "-";
      }
      iVar4 = FUN_100c5c0c0(param_1," %s%lu (%s0x%lx)\n",pcVar10,lVar5,pcVar10,lVar5);
      if (iVar4 < 1) {
        return 0;
      }
    }
    else {
      if (piVar6[1] == 0x102) {
        pcVar10 = " (Negative)";
      }
      else {
        pcVar10 = "";
      }
      iVar4 = FUN_100c5c0c0(param_1,"\n%12s%s","",pcVar10);
      if (iVar4 < 1) {
        return 0;
      }
      lVar5 = 0;
      while (lVar5 < *piVar6) {
        puVar1 = (undefined1 *)(*(long *)(piVar6 + 2) + lVar5);
        lVar5 = lVar5 + 1;
        uVar8 = 0x3a;
        if ((int)lVar5 == *piVar6) {
          uVar8 = 10;
        }
        iVar4 = FUN_100c5c0c0(param_1,"%02x%c",*puVar1,uVar8);
        if (iVar4 < 1) {
          return 0;
        }
      }
    }
  }
  if (((param_4 & 8) == 0) &&
     (iVar4 = FUN_100c7ebf0(param_1,*(undefined8 *)(lVar2 + 0x10),0), iVar4 < 1)) {
    return 0;
  }
  if ((param_4 & 0x10) == 0) {
    iVar4 = FUN_100c5c0c0(param_1,"        Issuer:%c",uVar11);
    if (iVar4 < 1) {
      return 0;
    }
    uVar8 = FUN_100c92460(param_2);
    iVar4 = FUN_100c79e60(param_1,uVar8,uVar9,param_3);
    if (iVar4 < 0) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"\n",1);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x20) == 0) {
    iVar4 = FUN_100c58980(param_1,"        Validity\n",0x11);
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"            Not Before: ",0x18);
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = *(int *)(**(long **)(*param_2 + 0x20) + 4);
    if (iVar4 == 0x18) {
      iVar4 = FUN_100c7f2c0(param_1);
    }
    else {
      if (iVar4 != 0x17) goto LAB_100c7eb12;
      iVar4 = FUN_100c7f0d0(param_1);
    }
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"\n            Not After : ",0x19);
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = *(int *)(*(long *)(*(long *)(*param_2 + 0x20) + 8) + 4);
    if (iVar4 == 0x18) {
      iVar4 = FUN_100c7f2c0(param_1);
    }
    else {
      if (iVar4 != 0x17) {
LAB_100c7eb12:
        FUN_100c58980(param_1,"Bad time value",0xe);
        return 0;
      }
      iVar4 = FUN_100c7f0d0(param_1);
    }
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"\n",1);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x40) == 0) {
    iVar4 = FUN_100c5c0c0(param_1,"        Subject:%c",uVar11);
    if (iVar4 < 1) {
      return 0;
    }
    uVar8 = FUN_100c92690(param_2);
    iVar4 = FUN_100c79e60(param_1,uVar8,uVar9,param_3);
    if (iVar4 < 0) {
      return 0;
    }
    iVar4 = FUN_100c58980(param_1,"\n",1);
    if (iVar4 < 1) {
      return 0;
    }
  }
  if ((param_4 & 0x80) == 0) {
    iVar4 = FUN_100c58980(param_1,"        Subject Public Key Info:\n",0x21);
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = FUN_100c5c0c0(param_1,"%12sPublic Key Algorithm: ","");
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = FUN_100c74930(param_1,*(undefined8 *)**(undefined8 **)(lVar2 + 0x30));
    if (iVar4 < 1) {
      return 0;
    }
    iVar4 = FUN_100c58a70(param_1,"\n");
    if (iVar4 < 1) {
      return 0;
    }
    lVar5 = FUN_100c929a0(param_2);
    if (lVar5 == 0) {
      FUN_100c5c0c0(param_1,"%12sUnable to load Public Key\n","");
      FUN_100c65120(param_1);
    }
    else {
      FUN_100c6d960(param_1,lVar5,0x10,0);
      FUN_100c6d8c0(lVar5);
    }
  }
  if ((param_4 & 0x100) == 0) {
    FUN_100c9ec90(param_1,"X509v3 extensions",*(undefined8 *)(lVar2 + 0x48),param_4,8);
  }
  if (((param_4 & 0x200) == 0) && (iVar4 = FUN_100c7ebf0(param_1,param_2[1],param_2[2]), iVar4 < 1))
  {
    return 0;
  }
  if (((param_4 & 0x400) == 0) && (iVar4 = FUN_100c7f6b0(param_1,param_2[0x16],0), iVar4 == 0)) {
    return 0;
  }
  return 1;
}

