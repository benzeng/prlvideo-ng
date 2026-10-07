
QFileInfo * FUN_10004e0b0(QFileInfo *param_1,void **param_2)

{
  uint uVar1;
  uint *puVar2;
  QFileInfo *this;
  
  puVar2 = *param_2;
  if (1 < *puVar2) {
    FUN_10004e190(param_2,puVar2[1]);
    puVar2 = *param_2;
  }
  QFileInfo::QFileInfo(param_1,(QFileInfo *)(puVar2 + (long)(int)puVar2[3] * 2 + 2));
  puVar2 = *param_2;
  if (*puVar2 < 2) {
    this = (QFileInfo *)(puVar2 + (long)(int)puVar2[3] * 2 + 2);
  }
  else {
    FUN_10004e190(param_2,puVar2[1]);
    puVar2 = *param_2;
    this = (QFileInfo *)(puVar2 + (long)(int)puVar2[3] * 2 + 2);
    if (1 < *puVar2) {
      uVar1 = puVar2[2];
      FUN_10004e190(param_2,puVar2[1]);
      this = (QFileInfo *)
             ((long)*param_2 +
             ((long)(int)((ulong)((long)this - (long)(puVar2 + (long)(int)uVar1 * 2 + 4)) >> 3) +
             (long)*(int *)((long)*param_2 + 8)) * 8 + 0x10);
    }
  }
  QFileInfo::~QFileInfo(this);
  QListData::erase(param_2);
  return param_1;
}

