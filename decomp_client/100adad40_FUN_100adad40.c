
void FUN_100adad40(long param_1,QByteArray *param_2)

{
  if (*(int *)(*(long *)param_2 + 4) != 0) {
    QByteArray::operator=((QByteArray *)(param_1 + 0x10),param_2);
    *(undefined1 *)(param_1 + 0x18) = 1;
    FUN_100ae3920(param_1);
    return;
  }
  return;
}

