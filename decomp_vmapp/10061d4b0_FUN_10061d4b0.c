
void FUN_10061d4b0(QSslConfiguration *param_1)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  QSslCertificate *this;
  long lVar4;
  Data *local_50;
  QArrayData *local_48;
  QSslCertificate local_40 [8];
  QList local_38 [15];
  undefined1 local_29;
  
  QSslConfiguration::defaultConfiguration();
  QSslConfiguration::setPeerVerifyMode(local_38,2);
  QSslConfiguration::setProtocol(local_38,5);
  QByteArray::QByteArray((QByteArray *)&local_48,s______BEGIN_CERTIFICATE______MIID_101120000,-1);
  QSslCertificate::QSslCertificate(local_40,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061d53d;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10061d53d:
  cVar3 = QSslCertificate::isNull();
  if (cVar3 != '\0') {
    FUN_1008e3970("","prl_problem_report_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! certificate.isNull()","CProblemReportUtils_common.cpp",0xb3,
                  "setNetworkRequestSslConfiguration");
  }
  cVar3 = QSslCertificate::isNull();
  if (cVar3 == '\0') {
    local_50 = (Data *)PTR_shared_null_100ba2188;
    FUN_100620db0(&local_50,local_40);
    QSslConfiguration::setCaCertificates(local_38);
    pDVar2 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10061d63a;
      }
      iVar1 = *(int *)(local_50 + 0xc);
      if (iVar1 != *(int *)(local_50 + 8)) {
        lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
        this = (QSslCertificate *)(local_50 + (long)iVar1 * 8 + 8);
        do {
          QSslCertificate::~QSslCertificate(this);
          this = this + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(pDVar2);
    }
  }
  else {
    QSslConfiguration::setPeerVerifyMode(local_38,0);
  }
LAB_10061d63a:
  QNetworkRequest::setSslConfiguration(param_1);
  QSslCertificate::~QSslCertificate(local_40);
  QSslConfiguration::~QSslConfiguration((QSslConfiguration *)local_38);
  return;
}

