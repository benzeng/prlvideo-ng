
undefined8 FUN_1000b6900(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_1000675d0(DAT_1011c3650);
  FUN_10008f4d0(param_1);
  if (*(long *)(param_1 + 0x50) == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPendingCmd",
                  "VirtualPCStates.cpp",0x348,"stateVmInit");
  }
  iVar4 = FUN_1000b1a10(param_1);
  lVar1 = param_1 + 0x10b0;
  if (-1 < iVar4) {
    uVar5 = 0;
    do {
      iVar4 = FUN_1000a3a50(param_1);
      if (iVar4 < 0) {
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_100408ff0(lVar1,iVar4,&local_68);
        FUN_10002d9d0(&local_68);
        goto LAB_1000b6c04;
      }
      iVar4 = FUN_1000a4290(param_1);
      if (iVar4 < 0) {
        cVar3 = FUN_100409070(lVar1);
        if (cVar3 == '\0') {
          FUN_1008e3970("","vm",0,"Guest memory object allocation. Yet another try...");
          iVar4 = FUN_1000a4290(param_1);
          if (-1 < iVar4) {
            FUN_1008e3970("","vm",0,"Guest memory object allocation. Yet another try...ok");
            FUN_1000c81f0(*(undefined8 *)(param_1 + 0x109c8),0);
            goto LAB_1000b6a23;
          }
        }
        else {
LAB_1000b6b96:
          iVar4 = FUN_100409090(lVar1);
          if (-1 < iVar4) {
LAB_1000b6ba6:
            QTime::start();
            FUN_10008ec80(param_1,2);
            return 1;
          }
        }
        goto LAB_1000b6c04;
      }
LAB_1000b6a23:
      if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 8) != 0) {
        FUN_1000d1d80();
        iVar4 = FUN_1000cb5b0(*(undefined8 *)(param_1 + 0x109c8));
        if (iVar4 < 0) {
          FUN_10008f760(param_1,iVar4);
          FUN_10008fa70(param_1,0x3ee);
          goto LAB_1000b6c04;
        }
      }
      iVar4 = FUN_1000be190(param_1,uVar5,0);
      if (-1 < iVar4) goto LAB_1000b6ba6;
      if (iVar4 == -0x7ffffe6a) {
        cVar3 = FUN_1000af830(param_1);
        iVar4 = -0x7ffffe6a;
        if ((cVar3 == '\0') || (*(char *)(param_1 + 0x1150) == '\0')) goto LAB_1000b6c04;
        FUN_100409080(lVar1);
        *(undefined1 *)(param_1 + 0x1150) = 0;
      }
      else {
        if (iVar4 != -0x7ffffa7e) goto LAB_1000b6c04;
        FUN_100409080(lVar1);
        cVar3 = FUN_1000be4a0(param_1);
        iVar4 = -0x7ffffd8b;
        uVar5 = 1;
        if (cVar3 == '\0') goto LAB_1000b6c04;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x1948);
      *(undefined4 *)(param_1 + 0x1948) = 2;
      FUN_1000a9530(param_1);
      *(undefined4 *)(param_1 + 0x1948) = uVar2;
      cVar3 = FUN_100409070(lVar1);
      if (cVar3 != '\0') goto LAB_1000b6b96;
      FUN_10042fe30(*(undefined8 *)(param_1 + 0xf0));
      FUN_100409080(lVar1);
      FUN_1000a45d0(param_1);
      iVar4 = FUN_1000b1a10(param_1);
    } while (-1 < iVar4);
  }
  FUN_1008e3970("","vm",0,"Can\'t init Monitor configuration");
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_100408ff0(lVar1,iVar4,&local_48);
  FUN_10002d9d0(&local_48);
LAB_1000b6c04:
  FUN_10008f760(param_1,iVar4);
  FUN_10008ec80(param_1,0xc);
  return 0;
}

