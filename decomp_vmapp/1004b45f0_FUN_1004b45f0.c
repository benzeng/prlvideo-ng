
void FUN_1004b45f0(long param_1)

{
  QThread::usleep(100000);
  QMutex::lock();
  if (*(char *)(param_1 + 0x20) == '\0') {
    QMutex::unlock();
    QThread::usleep(100000);
    QMutex::lock();
    if (*(char *)(param_1 + 0x20) == '\0') {
      QMutex::unlock();
      QThread::usleep(100000);
      QMutex::lock();
      if (*(char *)(param_1 + 0x20) == '\0') {
        QMutex::unlock();
        QThread::usleep(100000);
        QMutex::lock();
        if (*(char *)(param_1 + 0x20) == '\0') {
          QMutex::unlock();
          QThread::usleep(100000);
          QMutex::lock();
          if (*(char *)(param_1 + 0x20) == '\0') {
            QMutex::unlock();
            QThread::usleep(100000);
            QMutex::lock();
            if (*(char *)(param_1 + 0x20) == '\0') {
              QMutex::unlock();
              QThread::usleep(100000);
              QMutex::lock();
              if (*(char *)(param_1 + 0x20) == '\0') {
                QMutex::unlock();
                QThread::usleep(100000);
                QMutex::lock();
                if (*(char *)(param_1 + 0x20) == '\0') {
                  QMutex::unlock();
                  QThread::usleep(100000);
                  QMutex::lock();
                  if (*(char *)(param_1 + 0x20) == '\0') {
                    QMutex::unlock();
                    QThread::usleep(100000);
                    QMutex::lock();
                    if (*(char *)(param_1 + 0x20) == '\0') {
                      QMutex::unlock();
                      QThread::usleep(100000);
                      QMutex::lock();
                      if (*(char *)(param_1 + 0x20) == '\0') {
                        QMutex::unlock();
                        QThread::usleep(100000);
                        QMutex::lock();
                        if (*(char *)(param_1 + 0x20) == '\0') {
                          QMutex::unlock();
                          QThread::usleep(100000);
                          QMutex::lock();
                          if (*(char *)(param_1 + 0x20) == '\0') {
                            QMutex::unlock();
                            QMutex::lock();
                            if ((*(long *)(param_1 + 0x10) != 0) &&
                               (*(char *)(param_1 + 0x20) == '\0')) {
                              FUN_1004b2230();
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  QMutex::unlock();
  return;
}

