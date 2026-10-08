
void FUN_100334830(long param_1)

{
  undefined *puVar1;
  CHostDesktop *this;
  long lVar2;
  undefined8 uVar3;
  Connection local_38 [8];
  Connection local_30 [8];
  
  puVar1 = PTR_m_instance_1021e12d8;
  this = *(CHostDesktop **)PTR_m_instance_1021e12d8;
  if (this == (CHostDesktop *)0x0) {
    this = operator_new(0x18);
    CHostDesktop::CHostDesktop(this);
    *(CHostDesktop **)puVar1 = this;
    DAT_102271140 = 1;
  }
  uVar3 = 0;
  QObject::connect(local_30,this,"2screensLayoutChanged(const QList<QRect>&, const QList<QRect>&)",
                   param_1,"1onHostScreensLayoutChanged(const QList<QRect>&, const QList<QRect>&)",0
                  );
  QMetaObject::Connection::~Connection(local_30);
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 != 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_100319390(uVar3);
    QObject::connect(local_38,uVar3,
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,"1onVmConfigChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return;
}

