
void FUN_1000e20b0(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  
  FUN_100df99c0("SGAC","prl_client_app",0,"* <FavRunData ptr=%p>:",param_1);
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,"*    appName      = \"%s\"",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1000e2145;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1000e2145:
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,"*    appPath      = \"%s\"",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1000e21a8;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000e21a8:
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,"*    bundlePath   = \"%s\"",
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1000e220b;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000e220b:
  FUN_100df99c0("SGAC","prl_client_app",0,"*    helperPSN    = {%u, %u}",
                *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  FUN_100df99c0("SGAC","prl_client_app",0,"*    flags        = 0x%x",*(undefined4 *)(param_1 + 0x20)
               );
  FUN_100df99c0("SGAC","prl_client_app",0,"*    runFlags     = 0x%x",*(undefined4 *)(param_1 + 0x24)
               );
  iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0xc);
  piVar1 = (int *)(*(long *)(param_1 + 0x38) + 8);
  if (iVar2 != *piVar1 && *piVar1 <= iVar2) {
    FUN_100df99c0("SGAC","prl_client_app",0,"*    <windows total=%i>:");
    lVar6 = *(long *)(param_1 + 0x38);
    uVar7 = (ulong)*(uint *)(lVar6 + 8);
    if ((int)*(uint *)(lVar6 + 8) < *(int *)(lVar6 + 0xc)) {
      uVar8 = 0;
      do {
        puVar5 = *(undefined4 **)(lVar6 + 0x10 + ((long)(int)uVar7 + uVar8) * 8);
        uVar3 = *puVar5;
        uVar4 = puVar5[4];
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",0,
                      "*        win[%i]: winID=0x%x, pid=0x%x, winTitle=\"%s\", flags=%d",
                      uVar8 & 0xffffffff,uVar3,uVar4,local_58 + *(long *)(local_58 + 0x10),
                      *(undefined4 *)
                       (*(long *)(*(long *)(param_1 + 0x38) + 0x10 +
                                 ((long)*(int *)(*(long *)(param_1 + 0x38) + 8) + uVar8) * 8) + 0x1c
                       ));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            UNLOCK();
            if (*(int *)local_58 != 0) goto LAB_1000e235a;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1000e235a:
        uVar8 = uVar8 + 1;
        lVar6 = *(long *)(param_1 + 0x38);
        uVar7 = (ulong)*(int *)(lVar6 + 8);
      } while ((long)uVar8 < (long)((long)*(int *)(lVar6 + 0xc) - uVar7));
    }
  }
  FUN_100df99c0("SGAC","prl_client_app",0,"* </FavRunData>");
  return;
}

