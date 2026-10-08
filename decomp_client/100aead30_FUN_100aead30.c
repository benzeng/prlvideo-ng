
void FUN_100aead30(QFile *param_1)

{
  char cVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_10223b300;
  cVar1 = QIODevice::isOpen();
  if (cVar1 != '\0') {
    FUN_100aeac20(param_1);
  }
  QFile::~QFile(param_1);
  return;
}

