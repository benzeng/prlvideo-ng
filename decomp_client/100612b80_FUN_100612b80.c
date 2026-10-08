
void FUN_100612b80(QObject *param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  QObject *pQVar1;
  undefined4 *puVar2;
  QObject *pQVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = (int)param_3;
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    switch(param_3 & 0xffffffff) {
    case 0:
      FUN_10060adf0(param_1,param_2,*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 1:
      FUN_10060c360(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_10060c950(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10060cf20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100610e20(param_1,param_2,param_3,param_4[3]);
      return;
    case 5:
      FUN_10060aa10(param_1);
      return;
    case 6:
      FUN_10060e940(param_1);
      return;
    case 7:
      FUN_10060fc80(param_1);
      return;
    case 8:
      FUN_100610ac0(param_1);
      return;
    case 9:
      FUN_100611670(param_1);
      return;
    case 10:
      FUN_100611df0(param_1);
      return;
    case 0xb:
      FUN_100607fb0(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xc:
      pQVar1 = (QObject *)param_4[1];
      pQVar3 = (QObject *)FUN_10016f500(pQVar1);
      QObject::disconnect(pQVar3,
                          "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                          ,param_1,"1onLicenseChanged()");
      QObject::disconnect(pQVar1,"2serverStateChanged(GUI::ServerState)",param_1,
                          "1onServerStateChanged(GUI::ServerState)");
      return;
    case 0xd:
      FUN_10060ec40(param_1);
      return;
    case 0xe:
      FUN_10060ed30(param_1);
      return;
    case 0xf:
      FUN_100611000(param_1);
      return;
    case 0x10:
      FUN_100611a50(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0x11:
      uVar5 = 0xc;
      break;
    case 0x12:
      if (*(int *)param_4[2] != 1) {
        return;
      }
      uVar5 = 0xb;
      break;
    default:
      return;
    }
    FUN_1006085d0(uVar5,0);
    return;
  }
  if (iVar4 < 0x10) {
    if ((iVar4 != 0) && (iVar4 != 4)) goto LAB_100612c46;
  }
  else {
    if (iVar4 == 0x10) {
      puVar2 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar2 = 0xffffffff;
        return;
      }
      goto LAB_100612c0a;
    }
    if (iVar4 != 0x12) goto LAB_100612c46;
  }
  if (*(int *)param_4[1] == 0) {
    puVar2 = (undefined4 *)*param_4;
LAB_100612c0a:
    *puVar2 = 2;
    return;
  }
  if (*(int *)param_4[1] == 1) {
    if (DAT_10226db58 == 0) {
      DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
    }
    *(int *)*param_4 = DAT_10226db58;
    return;
  }
LAB_100612c46:
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
}

