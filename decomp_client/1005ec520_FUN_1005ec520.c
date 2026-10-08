
void FUN_1005ec520(QObject *param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
  QTimer::singleShot(300,param_1,"1onEnterPageAnimationFinished()");
  return;
}

