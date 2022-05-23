# Deamon.json Simple

```json
{
  "graph": "/data/docker",  # 存储路径
  "storage-driver": "overlay2", # 存储驱动
  "insecure-registries": ["harbr.docker.com","registry.access.redhat.com","quay.io","http://f1361db2.m.daocloud.io"],
  "registry-mirrors": ["http://hub-mirror.c.163.com"],
  "bip": "172.7.5.1/24",  # bridge 的 ip
  "exec-opts": ["native.cgroupdriver=systemd"], # 定义cgroup驱动
  "live-restore": true  # docker容器不依赖与docker引擎  ，引擎死容器不死

}
systemctl daemon-reload
systemctl restart docker
systemctl enable docker

```