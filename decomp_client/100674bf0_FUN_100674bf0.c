
void FUN_100674bf0(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x20),"2createAccountFinished(PRL_RESULT)",
                   param_1,"1onCreateAccountFinished(PRL_RESULT)",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect((Connection *)&local_30,*(undefined8 *)(param_1 + 0x20),
                     "2updateAccountInfoFinished(PRL_RESULT, int)",param_1,
                     "1onUpdateAccountInfoFinished(PRL_RESULT, int)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675271:
    QObject::connect((Connection *)&local_38,uVar3,"2updateLicenseFinished(PRL_RESULT, bool)",
                     param_1,"1onUpdateLicenseFinished(PRL_RESULT, bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_10067529d:
    QObject::connect((Connection *)&local_40,uVar3,"2signInFinished(PRL_RESULT)",param_1,
                     "1onSignInFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006752c9:
    QObject::connect((Connection *)&local_48,uVar3,"2signOutFinished(PRL_RESULT)",param_1,
                     "1onSignOutFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006752f5:
    QObject::connect((Connection *)&local_50,uVar3,"2downloadKeysFinished(PRL_RESULT,QString)",
                     param_1,"1onDownloadKeysFinished(PRL_RESULT,QString)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675321:
    QObject::connect((Connection *)&local_58,uVar3,"2keysRegistrationFinished(PRL_RESULT)",param_1,
                     "1onKeysRegistrationFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_10067534d:
    QObject::connect((Connection *)&local_60,uVar3,"2querySupportCodeFinished(PRL_RESULT)",param_1,
                     "1onQuerySupportCodeFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675379:
    QObject::connect((Connection *)&local_68,uVar3,
                     "2trialActivationFinished(PRL_RESULT, bool, PRL_EDITION_ENUM)",param_1,
                     "1onTrialActivationFinished(PRL_RESULT, bool, PRL_EDITION_ENUM)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006753a5:
    QObject::connect((Connection *)&local_70,uVar3,"2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOnlineActivationFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006753d1:
    QObject::connect((Connection *)&local_78,uVar3,"2offlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOfflineActivateFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006753fd:
    QObject::connect((Connection *)&local_80,uVar3,
                     "2socialAccountCredentialsReceived(PRL_RESULT,GUI::AuthType,QString,QString)",
                     param_1,
                     "1onSocialAccountCredentialsReceived(PRL_RESULT,GUI::AuthType,QString,QString)"
                     ,0);
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675429:
    QObject::connect((Connection *)&local_88,uVar3,"2deactivateLicenseFinished(PRL_RESULT)",param_1,
                     "1onDeactivateLicenseFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675458:
    QObject::connect((Connection *)&local_90,uVar3,"2renewLicenseFinished(PRL_RESULT)",param_1,
                     "1onRenewLicenseFinished(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675487:
    QObject::connect((Connection *)&local_98,uVar3,"2askAccountConfirmationFinished(bool)",param_1,
                     "1onAskAccountConfirmationFinished(bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006754b6:
    QObject::connect((Connection *)&local_a0,uVar3,
                     "2resendConfirmationToMailFinished(PRL_RESULT,bool)",param_1,
                     "1onResendConfirmationToMailFinished(PRL_RESULT,bool)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_1006754e5:
    QObject::connect((Connection *)&local_a8,uVar3,"2getUpgradeToProUrlFinished(PRL_RESULT,QString)"
                     ,param_1,"1onGetUpgradeToProUrlFinished(PRL_RESULT,QString)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675514:
    QObject::connect((Connection *)&local_b0,uVar3,
                     "2getUpgradePermanentToProUrlFinished(PRL_RESULT,QString)",param_1,
                     "1onGetUpgradePermanentToProUrlFinished(PRL_RESULT,QString)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_b0);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
LAB_100675543:
    QObject::connect((Connection *)&local_b8,uVar3,
                     "2downloadTrialActivationPromoFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onDownloadTrialActivationPromoFinished(PRL_RESULT,CAbstractTask*)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
LAB_10067556e:
    cVar1 = '\0';
    QObject::connect(&local_c0,param_1,"2currentPageIdChanged(int,int)",param_1,
                     "1onCurrentPageIdChanged(int)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x20),
                     "2updateAccountInfoFinished(PRL_RESULT, int)",param_1,
                     "1onUpdateAccountInfoFinished(PRL_RESULT, int)",0);
    if ((cVar1 == '\0') || (local_30 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_30);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675271;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x20),
                     "2updateLicenseFinished(PRL_RESULT, bool)",param_1,
                     "1onUpdateLicenseFinished(PRL_RESULT, bool)",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10067529d;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x20),"2signInFinished(PRL_RESULT)",param_1
                     ,"1onSignInFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006752c9;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x20),"2signOutFinished(PRL_RESULT)",
                     param_1,"1onSignOutFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006752f5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x20),
                     "2downloadKeysFinished(PRL_RESULT,QString)",param_1,
                     "1onDownloadKeysFinished(PRL_RESULT,QString)",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675321;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x20),
                     "2keysRegistrationFinished(PRL_RESULT)",param_1,
                     "1onKeysRegistrationFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10067534d;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x20),
                     "2querySupportCodeFinished(PRL_RESULT)",param_1,
                     "1onQuerySupportCodeFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_60 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_60);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675379;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x20),
                     "2trialActivationFinished(PRL_RESULT, bool, PRL_EDITION_ENUM)",param_1,
                     "1onTrialActivationFinished(PRL_RESULT, bool, PRL_EDITION_ENUM)",0);
    if ((cVar1 == '\0') || (local_68 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_68);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006753a5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x20),
                     "2onlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOnlineActivationFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006753d1;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x20),
                     "2offlineActivationFinished(PRL_RESULT)",param_1,
                     "1onOfflineActivateFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006753fd;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x20),
                     "2socialAccountCredentialsReceived(PRL_RESULT,GUI::AuthType,QString,QString)",
                     param_1,
                     "1onSocialAccountCredentialsReceived(PRL_RESULT,GUI::AuthType,QString,QString)"
                     ,0);
    if ((cVar1 == '\0') || (local_80 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675429;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x20),
                     "2deactivateLicenseFinished(PRL_RESULT)",param_1,
                     "1onDeactivateLicenseFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_88 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_88);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675458;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_88);
    QObject::connect(&local_90,*(undefined8 *)(param_1 + 0x20),"2renewLicenseFinished(PRL_RESULT)",
                     param_1,"1onRenewLicenseFinished(PRL_RESULT)",0);
    if ((cVar1 == '\0') || (local_90 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_90);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675487;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_90);
    QObject::connect(&local_98,*(undefined8 *)(param_1 + 0x20),
                     "2askAccountConfirmationFinished(bool)",param_1,
                     "1onAskAccountConfirmationFinished(bool)",0);
    if ((cVar1 == '\0') || (local_98 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_98);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006754b6;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_98);
    QObject::connect(&local_a0,*(undefined8 *)(param_1 + 0x20),
                     "2resendConfirmationToMailFinished(PRL_RESULT,bool)",param_1,
                     "1onResendConfirmationToMailFinished(PRL_RESULT,bool)",0);
    if ((cVar1 == '\0') || (local_a0 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_a0);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1006754e5;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
    QObject::connect(&local_a8,*(undefined8 *)(param_1 + 0x20),
                     "2getUpgradeToProUrlFinished(PRL_RESULT,QString)",param_1,
                     "1onGetUpgradeToProUrlFinished(PRL_RESULT,QString)",0);
    if ((cVar1 == '\0') || (local_a8 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675514;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_a8);
    QObject::connect(&local_b0,*(undefined8 *)(param_1 + 0x20),
                     "2getUpgradePermanentToProUrlFinished(PRL_RESULT,QString)",param_1,
                     "1onGetUpgradePermanentToProUrlFinished(PRL_RESULT,QString)",0);
    if ((cVar1 == '\0') || (local_b0 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_b0);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_100675543;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_b0);
    QObject::connect(&local_b8,*(undefined8 *)(param_1 + 0x20),
                     "2downloadTrialActivationPromoFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onDownloadTrialActivationPromoFinished(PRL_RESULT,CAbstractTask*)",0);
    if ((cVar1 == '\0') || (local_b8 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_b8);
      goto LAB_10067556e;
    }
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_b8);
    cVar1 = '\0';
    QObject::connect(&local_c0,param_1,"2currentPageIdChanged(int,int)",param_1,
                     "1onCurrentPageIdChanged(int)",0);
    if (cVar2 != '\0') {
      if (local_c0 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_c0);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  QObject::connect(&local_c8,uVar3,
                   "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,param_1,
                   "1onLicenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                   ,0);
  if ((cVar1 == '\0') || (local_c8 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_c8);
    QObject::connect(&local_d0,*(undefined8 *)(param_1 + 0x180),"2timeout()",param_1,
                     "1downloadKeys()",0);
LAB_100675840:
    QMetaObject::Connection::~Connection((Connection *)&local_d0);
    QObject::connect(&local_d8,*(undefined8 *)(param_1 + 0x20),
                     "2waitKeysChangesInAccountFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onWaitKeysChangesInAccountFinished(PRL_RESULT,CAbstractTask*)",0);
LAB_10067586f:
    QMetaObject::Connection::~Connection((Connection *)&local_d8);
    QObject::connect(&local_e0,*(undefined8 *)(param_1 + 0x20),
                     "2getSubscriptionsToExtendFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onGetSubscriptionsToExtendFinished(PRL_RESULT,CAbstractTask*)",0);
LAB_10067589e:
    QMetaObject::Connection::~Connection((Connection *)&local_e0);
    QObject::connect(&local_e8,*(undefined8 *)(param_1 + 0x20),
                     "2extendSubscriptionFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onExtendSubscriptionFinished(PRL_RESULT,CAbstractTask*)",0);
LAB_1006758cd:
    QMetaObject::Connection::~Connection((Connection *)&local_e8);
    QObject::connect(&local_f0,*(undefined8 *)(param_1 + 0x20),
                     "2getRenewUrlFinished(PRL_RESULT,QString)",param_1,
                     "1onGetRenewUrlFinished(PRL_RESULT,QString)",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_c8);
    QObject::connect(&local_d0,*(undefined8 *)(param_1 + 0x180),"2timeout()",param_1,
                     "1downloadKeys()",0);
    if ((cVar1 == '\0') || (local_d0 == 0)) goto LAB_100675840;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_d0);
    QObject::connect(&local_d8,*(undefined8 *)(param_1 + 0x20),
                     "2waitKeysChangesInAccountFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onWaitKeysChangesInAccountFinished(PRL_RESULT,CAbstractTask*)",0);
    if ((cVar1 == '\0') || (local_d8 == 0)) goto LAB_10067586f;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_d8);
    QObject::connect(&local_e0,*(undefined8 *)(param_1 + 0x20),
                     "2getSubscriptionsToExtendFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onGetSubscriptionsToExtendFinished(PRL_RESULT,CAbstractTask*)",0);
    if ((cVar1 == '\0') || (local_e0 == 0)) goto LAB_10067589e;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_e0);
    QObject::connect(&local_e8,*(undefined8 *)(param_1 + 0x20),
                     "2extendSubscriptionFinished(PRL_RESULT,CAbstractTask*)",param_1,
                     "1onExtendSubscriptionFinished(PRL_RESULT,CAbstractTask*)",0);
    if ((cVar1 == '\0') || (local_e8 == 0)) goto LAB_1006758cd;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_e8);
    QObject::connect(&local_f0,*(undefined8 *)(param_1 + 0x20),
                     "2getRenewUrlFinished(PRL_RESULT,QString)",param_1,
                     "1onGetRenewUrlFinished(PRL_RESULT,QString)",0);
    if ((cVar1 != '\0') && (local_f0 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_f0);
      QObject::connect(&local_f8,*(undefined8 *)(param_1 + 0x20),"2webAuthFinished()",param_1,
                       "1onGoogleWebAuthFinished()",0);
      if ((cVar1 != '\0') && (local_f8 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100675925;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_f0);
  QObject::connect(&local_f8,*(undefined8 *)(param_1 + 0x20),"2webAuthFinished()",param_1,
                   "1onGoogleWebAuthFinished()",0);
LAB_100675925:
  QMetaObject::Connection::~Connection((Connection *)&local_f8);
  return;
}

