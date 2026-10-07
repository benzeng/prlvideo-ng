
undefined1 FUN_10055f4d0(QString *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined1 uVar5;
  long local_48 [2];
  long local_38 [2];
  
  iVar2 = QString::compare(param_1,param_2,1);
  uVar5 = 1;
  if (iVar2 != 0) {
    QFile::QFile((QFile *)local_38,param_1);
    QFile::QFile((QFile *)local_48,param_2);
    cVar1 = QFile::open(local_38,1);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      cVar1 = QFile::open(local_48,2);
      if (cVar1 == '\0') {
        (**(code **)(local_38[0] + 0x70))(local_38);
        uVar5 = 0;
      }
      else {
        pvVar3 = operator_new__(0x10000);
        do {
          cVar1 = (**(code **)(local_38[0] + 0x90))(local_38);
          uVar5 = 1;
          if (cVar1 != '\0') goto LAB_10055f59c;
          QIODevice::read((char *)local_38,(longlong)pvVar3);
          lVar4 = QIODevice::write((char *)local_48,(longlong)pvVar3);
        } while (lVar4 != -1);
        uVar5 = 0;
LAB_10055f59c:
        operator_delete__(pvVar3);
        (**(code **)(local_38[0] + 0x70))(local_38);
        (**(code **)(local_48[0] + 0x70))(local_48);
      }
    }
    QFile::~QFile((QFile *)local_48);
    QFile::~QFile((QFile *)local_38);
  }
  return uVar5;
}

