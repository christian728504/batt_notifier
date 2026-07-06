pkgname=batt_notifier
pkgver=1.0.0
pkgrel=1
pkgdesc="Sends a notification when battery charge drops below a threshold"
arch=('x86_64')
url="https://github.com/christian728504/batt_notifier"
license=('GPL3')
depends=('libnotify')
source=("config.h" "batt_notifier.c" "Makefile")
sha256sums=('SKIP' 'SKIP' 'SKIP')

build() {
    make
}

package() {
    install -Dm755 batt_notifier "$pkgdir/usr/bin/batt_notifier"
}
